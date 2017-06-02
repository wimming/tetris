//
//  Point.h
//  Tetris
//
//  Created by Â³ÛÌÎ¬ on 15/6/15.
//  Copyright (c) 2015Äê Â³ÛÌÎ¬£¬»ÆêÅÜø. All rights reserved.
//

#ifndef __Tetris__Point__
#define __Tetris__Point__

#include <ostream>

using std::ostream;

class Point {
public:
	Point(int _x = -1, int _y = -1, char _content = '#') : x(_x), y(_y), content(_content) {}
	friend ostream& operator<<(ostream& os, Point& p);
    int x;
    int y;
    char content;
};

#endif /* defined(__Tetris__Point__) */
