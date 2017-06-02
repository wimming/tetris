//
//  main.cpp
//  Tetris
//
//  Created by Â³ÛÌÎ¬ on 15/6/15.
//  Copyright (c) 2015Äê Â³ÛÌÎ¬£¬»ÆêÅÜø. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <Windows.h>
#include <vector> 

#include "Map.h"
#include "Block.h"

using namespace std;

int main(int argc, const char * argv[]) {
	Map _map = Map(20, 20);
	BaseItem * temp = NULL;
	int radNum, nextRadNum;
	int aa = 0, bb = 0;
	vector<BaseItem*> callback;

    std::cout << "Hello, World!\n";
	system("pause");
	system("cls");



	srand(time(NULL));
	nextRadNum = rand() % 7;
	while (true)
	{
		radNum = nextRadNum;
		nextRadNum = rand() % 7;

   		if (radNum == 0) {
			temp = new LineShape;
		}
		else if (radNum == 1) {
			temp = new TShape;
		}
		else if (radNum == 2) {
			temp = new SquareShape;
		}
		else if (radNum == 3) {
			temp = new LShape;
		}
		else if (radNum == 4) {
			temp = new LShape2;
		}
		else if (radNum == 5) {
			temp = new ZShape;
		}
		else if (radNum == 6) {
			temp = new ZShape2;
		}
		
		callback.push_back(temp);
		
#ifndef Traditional_Print1
		_map.printNext(nextRadNum);
#endif
		_map << temp;
		cout << _map;


		if (_map.blocked()) {
#ifndef Traditional_Print
			XXX(_map);
#endif
			cout << "Game Over" << endl;
			while (true) {
				system("pause");
				break;
			}
			break;
		}
		else {
			while (true) {
				if (_kbhit()) {
					char c = _getch();
					if (c == 's') {
						_map.fallingItemMoveDown();
					}
					else if (c == 'a') {
						_map.fallingItemMoveLeft();
					}
					else if (c == 'd') {
						_map.fallingItemMoveRight();
					}
					else if (c == 'w') {
						_map.fallingItemRotate();
					}
					else if (c == ' ') {
#ifndef Traditional_Print
						XXX(_map);
#endif
						system("pause");
#ifndef Traditional_Print
						XXX(_map);
						cout << "                                ";
#endif
					}
				} else {

					// normal control
					Sleep(50);
					++aa;
					if (aa == 8) {
						aa = 0;
						_map.fallingItemMoveDown();
					}

					// When reach the end, leave a short time for player to move.
					if (_map.blocked()) {
						++bb;
					}
					if (bb == 8) {
						bb = 0;
						aa = 0;
						_map << temp;
						_map.deleteRowWhenFull();
						break;
					}
				}
			}
		}
	}

	while (!callback.empty()) {
		BaseItem *delete_temp = callback.back();
		delete delete_temp;
		callback.pop_back();
	}

    return 0;
}
