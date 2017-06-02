//
//  BaseItem.h
//  Tetris
//
//  Created by Â³ÛÌÎ¬ on 15/6/15.
//  Copyright (c) 2015Äê Â³ÛÌÎ¬£¬»ÆêÅÜø. All rights reserved.
//

#ifndef __Tetris__BaseItem__
#define __Tetris__BaseItem__

#include <stdio.h>
#include <vector>
#include "Point.h"

using std::vector;

class BaseItem {
public:
	BaseItem() {}
	~BaseItem() {}
    void addPoint(int _x, int _y);
	void moveUp();
    void moveLeft();  // run when press left arrow
    void moveRight(); // run when press right arrow
    void moveDown();  // run when press down arrow or run operator<<(Map, BaseItem) function
	virtual void rotate() = 0;
	virtual void reverse_rotate() = 0;
    Point *getPoints();
	void setPointType(int _type);
	int getPointType();
private:
	Point points[4];
	int point_type;
};

#endif /* defined(__Tetris__BaseItem__) */
