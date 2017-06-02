//
//  Map.h
//  Tetris
//
//  Created by Â³ÛÌÎ¬ on 15/6/15.
//  Copyright (c) 2015Äê Â³ÛÌÎ¬£¬»ÆêÅÜø. All rights reserved.
//

#ifndef __Tetris__Map__
#define __Tetris__Map__

#include "BaseItem.h"
#include <vector>

using std::vector;
using std::ostream;

class Map {
public:
	Map(int width = 10, int height = 10);
	bool blocked();
	bool leftBlocked();
	bool rightBlocked();
	void deleteRowWhenFull();
	bool conflict();
	void fallingItemMoveUp();
	void fallingItemMoveDown();
	void fallingItemMoveLeft();
	void fallingItemMoveRight();
	void fallingItemRotate();
	void fallingItemRverse_Rotate();
	int getWidth();
	int getHeight();
	void printNext(int type);

    friend Map& operator<<(Map& _map, BaseItem* _block);
    friend ostream& operator<<(ostream& os, Map& _map);
	friend bool conflict(BaseItem *temp, Map &_map);
	friend void XXX(Map &_map);

private:
	void deleteRow(int row);

    vector<Point> fixedPointInMap;
	BaseItem *fallingItem;
    int width;
    int height;
};

#endif /* defined(__Tetris__Map__) */
