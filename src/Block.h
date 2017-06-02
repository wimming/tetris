//
//  Block.h
//  Tetris
//
//  Created by Â³ÛÌÎ¬ on 15/6/15.
//  Copyright (c) 2015Äê Â³ÛÌÎ¬£¬»ÆêÅÜø. All rights reserved.
//

#ifndef __Tetris__Block__
#define __Tetris__Block__

#include "BaseItem.h"

class LineShape : public BaseItem {
public:
	LineShape();
	virtual void rotate();
	virtual void reverse_rotate();
};

class TShape : public BaseItem {
public:
    TShape();
	virtual void rotate();
	virtual void reverse_rotate();
};

class SquareShape : public BaseItem {
public:
    SquareShape();
	virtual void rotate();
	virtual void reverse_rotate();
};

class LShape : public BaseItem {
public:
	LShape();
	virtual void rotate();
	virtual void reverse_rotate();
};

class LShape2 : public BaseItem {
public:
	LShape2();
	virtual void rotate();
	virtual void reverse_rotate();
};

class ZShape :public BaseItem {
public:
	ZShape();
	virtual void rotate();
	virtual void reverse_rotate();
};

class ZShape2 :public BaseItem {
public:
	ZShape2();
	virtual void rotate();
	virtual void reverse_rotate();
};

#endif /* defined(__Tetris__Block__) */
