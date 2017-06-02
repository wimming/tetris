//
//  Map.cpp
//  Tetris
//
//  Created by Â³ÛÌÎ¬ on 15/6/15.
//  Copyright (c) 2015Äê Â³ÛÌÎ¬£¬»ÆêÅÜø. All rights reserved.
//

#include <iostream>
#include <memory>
#include <algorithm>

#include "Map.h"
#include "BaseItem.h"
#include "Block.h"
#include "Gotoxy.h"

#define Traditional_Print1

extern char g_game_map[40][40] = { 0 };
extern int score = 0;
extern bool travel_tick[40][40] = {false};

using std::cout;

void XXX(Map &_map) {
	Gotoxy(_map.getHeight()+1, 0);
}

Map::Map(int _width, int _height) {
	width = _width;
	height = _height;

	// initialize fixed points for the map
	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < width; ++j) {
			if ((i == 0 || i == height - 1) || (j == 0 || j == width - 1)) {
				Point temp(i, j, '*');
				fixedPointInMap.push_back(temp);
			}
        }
    }

	// initialize the falling point pointer for the map
	fallingItem = NULL;
}

void Map::fallingItemMoveUp() {
	fallingItem->moveUp();
	cout << *this;
}

void Map::fallingItemMoveDown() {
	if (!blocked()) {
		fallingItem->moveDown();
	}
	cout << *this;
}

void Map::fallingItemMoveLeft() {
	if (!leftBlocked()) {
		fallingItem->moveLeft();
	}
	cout << *this;
}

void Map::fallingItemMoveRight() {
	if (!rightBlocked()) {
		fallingItem->moveRight();
	}
	cout << *this;
}

void Map::fallingItemRotate() {
	fallingItem->rotate();
	if (conflict()) {
		fallingItem->reverse_rotate();
	}
	cout << *this;
}

bool conflict(BaseItem *temp, Map &_map) {
	for (int i = 0; i < 4; ++i) {
		for (auto fallingP : _map.fixedPointInMap) {
			if (temp->getPoints()[i].x == fallingP.x && temp->getPoints()[i].y == fallingP.y) {
				return true;
			}
		}
	}
	return false;
}

ostream& operator<<(ostream& os, Map& _map) {
	
#ifdef Traditional_Print
	// reset the g_game_map
	for (int i = 0; i < _map.height; ++i) {
		for (int j = 0; j < _map.width; ++j) {
			g_game_map[i][j] = 0;
		}
	}

	// for fixed points in the map
	for (auto i : _map.fixedPointInMap) {
		g_game_map[i.x][i.y] = i.content;
	}

	// for falling points in the map
	for (int i = 0; i < 4; ++i) {
	g_game_map[_map.fallingItem->getPoints()[i].x][_map.fallingItem->getPoints()[i].y] =
	_map.fallingItem->getPoints()[i].content;
	}

	// cout the map
	system("cls");
	for (int i = 0; i < _map.height; ++i) {
		for (int j = 0; j < _map.width; ++j) {
			os << g_game_map[i][j];
		}
		if (i == 1) {
			os << "score";
		}
		else if (i == 2) {
			os << score;
		}
		os << std::endl;
	}
#else
	HideCursor();
	for (int i = 0; i < _map.height; ++i) {
		for (int j = 0; j < _map.width; ++j) {
			travel_tick[i][j] = false;
		}
	}

	for (auto i : _map.fixedPointInMap) {
		travel_tick[i.x][i.y] = true;
		if (g_game_map[i.x][i.y] != i.content) {
			g_game_map[i.x][i.y] = i.content;
			Gotoxy(i.x, i.y);
			os << i.content;
		}
	}

	for (int i = 0; i < 4; ++i) {
		travel_tick[_map.fallingItem->getPoints()[i].x][_map.fallingItem->getPoints()[i].y] = true;
		if (g_game_map[_map.fallingItem->getPoints()[i].x][_map.fallingItem->getPoints()[i].y] !=
			_map.fallingItem->getPoints()[i].content) {
			g_game_map[_map.fallingItem->getPoints()[i].x][_map.fallingItem->getPoints()[i].y] =
				_map.fallingItem->getPoints()[i].content;
			Gotoxy(_map.fallingItem->getPoints()[i].x, _map.fallingItem->getPoints()[i].y);
			os << _map.fallingItem->getPoints()[i].content;
		}
	}

	for (int i = 0; i < _map.height; ++i) {
		for (int j = 0; j < _map.width; ++j) {
			if (!travel_tick[i][j]) {
				if (g_game_map[i][j] != 0) {
					g_game_map[i][j] = 0;
					Gotoxy(i, j);
					os << " ";
				}
			}
		}
	}

	Gotoxy(7, _map.width+3);
	os << "score:";
	Gotoxy(9, _map.width+5);
	os << score*10;
#endif

	return os;
}

Map& operator<<(Map& _map, BaseItem* _block) {
	_map.fallingItem = _block;
	if (_map.blocked()) {
		for (int i = 0; i < 4; ++i) {
			_map.fixedPointInMap.push_back(_block->getPoints()[i]);
		}
	}
	return _map;
}

bool Map::conflict() {
	for (int i = 0; i < 4; ++i) {
		for (auto fallingP : fixedPointInMap) {
			if (fallingItem->getPoints()[i].x == fallingP.x && fallingItem->getPoints()[i].y == fallingP.y) {
				return true;
			}
		}
	}
	return false;
}

void Map::deleteRow(int row) {
	++score;
	for (auto itr = fixedPointInMap.begin(); itr != fixedPointInMap.end();) {
		if (itr->x == row && itr->y != 0 && itr->y != width-1) {
			itr = fixedPointInMap.erase(itr);
		}
		else {
			++itr;
		}
	}
}

void Map::deleteRowWhenFull() {
	int flag = 0;
	int *tick;
	int extra = 0;
	tick = new int[height];
	while (true) {
		memset(tick, 0, height * sizeof(int));
		for (auto i : fixedPointInMap) {  // read only
			++tick[i.x];
		}
		for (int i = height - 2; i >= 1; --i) {
			if (tick[i] == width) {
				deleteRow(i);
				score += extra;
				++extra;

				// points fall down when one row is removed
				for (auto itr = fixedPointInMap.begin(); itr != fixedPointInMap.end(); ++itr) {
					if (itr->x != 0 && itr->x != height - 1 &&
						itr->y != 0 && itr->y != width - 1 &&
						itr->x < i) {
						++itr->x;
					}
				}

				flag = 1;
				break;
			}
		}
		if (flag == 1) {
			flag = 0;
			continue;
		}
		break;
	}
	delete [] tick;
}

bool Map::blocked() {
	for (int i = 0; i < 4; ++i) {
		for (auto x : fixedPointInMap) {
			if (fallingItem->getPoints()[i].x + 1 == x.x && fallingItem->getPoints()[i].y == x.y) {
				return true;
			}
		}
	}
	return false;
}

bool Map::leftBlocked() {
	for (int i = 0; i < 4; ++i) {
		for (auto x : fixedPointInMap) {
			if (fallingItem->getPoints()[i].x == x.x && fallingItem->getPoints()[i].y - 1 == x.y) {
				return true;
			}
		}
	}
	return false;
}

bool Map::rightBlocked() {
	for (int i = 0; i < 4; ++i) {
		for (auto x : fixedPointInMap) {
			if (fallingItem->getPoints()[i].x == x.x && fallingItem->getPoints()[i].y + 1 == x.y) {
				return true;
			}
		}
	}
	return false;
}

int Map::getWidth() {
	return width;
}
int Map::getHeight() {
	return height;
}

void Map::printNext(int type) {
	BaseItem *temp = NULL;
	if (type == 0) {
		temp = new LineShape;
	}
	else if (type == 1) {
		temp = new TShape;
	}
	else if (type == 2) {
		temp = new SquareShape;
	}
	else if (type == 3) {
		temp = new LShape;
	}
	else if (type == 4) {
		temp = new LShape2;
	}
	else if (type == 5) {
		temp = new ZShape;
	}
	else if (type == 6) {
		temp = new ZShape2;
	}
	Gotoxy(0, width+3);
	cout << "next:";
	for (int x = 1; x <= 4; ++x) {
		Gotoxy(x, width+1);
		cout << "                                  ";
	}
	for (int i = 0; i < 4; ++i) {
		Gotoxy(temp->getPoints()[i].x, temp->getPoints()[i].y + width);
		cout << temp->getPoints()[i].content;
	}
}
