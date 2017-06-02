//
//  BaseItem.cpp
//  Tetris
//
//  Created by Â³ÛÌÎ¬ on 15/6/15.
//  Copyright (c) 2015Äê Â³ÛÌÎ¬£¬»ÆêÅÜø. All rights reserved.
//

#include "BaseItem.h"
extern char g_game_map[40][40];


Point* BaseItem::getPoints() {
	return points;
}

void BaseItem::moveUp() {
	for (int i = 0; i < 4; ++i) {
		points[i].x -= 1;
	}
}

void BaseItem::moveDown() {
	for (int i = 0; i < 4; ++i) {
		points[i].x += 1;
	}
}

void BaseItem::moveLeft() {
	for (int i = 0; i < 4; ++i) {
		points[i].y -= 1;
	}
}

void BaseItem::moveRight() {
	for (int i = 0; i < 4; ++i) {
		points[i].y += 1;
	}
}

void BaseItem::setPointType(int _type) {
	point_type = _type;
}

int BaseItem::getPointType() {
	return point_type;
}
