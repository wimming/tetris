//
//  Block.cpp
//  Tetris
//
//  Created by Â³ÛÌÎ¬ on 15/6/15.
//  Copyright (c) 2015Äê Â³ÛÌÎ¬£¬»ÆêÅÜø. All rights reserved.
//

#include "Block.h"
#include "Point.h"
#include <ctime>


LineShape::LineShape() {
	srand(time(NULL));
	int radNum = rand() % 2;
	setPointType(radNum);
	if (getPointType() == 0) {
		Point point_0(1, 10);
		Point point_1(2, 10);
		Point point_2(3, 10);
		Point point_3(4, 10);
		getPoints()[0] = point_0;
		getPoints()[1] = point_1;
		getPoints()[2] = point_2;
		getPoints()[3] = point_3;

	}
	else if (getPointType() == 1) {
		Point point_0(3, 8);
		Point point_1(3, 9);
		Point point_2(3, 10);
		Point point_3(3, 11);
		getPoints()[0] = point_0;
		getPoints()[1] = point_1;
		getPoints()[2] = point_2;
		getPoints()[3] = point_3;
	}
}

TShape::TShape() {
	srand(time(NULL));
	int radNum = rand() % 4;
	setPointType(radNum);
	if (getPointType() == 0) {
		Point point_0(2, 9);
		Point point_1(2, 10);
		Point point_2(2, 11);
		Point point_3(3, 10);
		getPoints()[0] = point_0;
		getPoints()[1] = point_1;
		getPoints()[2] = point_2;
		getPoints()[3] = point_3;
	}
	else if (getPointType() == 1) {
		Point point_0(1, 10);
		Point point_1(2, 10);
		Point point_2(2, 11);
		Point point_3(3, 10);
		getPoints()[0] = point_0;
		getPoints()[1] = point_1;
		getPoints()[2] = point_2;
		getPoints()[3] = point_3;
	}
	else if (getPointType() == 2) {
		Point point_0(1, 10);
		Point point_1(2, 9);
		Point point_2(2, 10);
		Point point_3(2, 11);
		getPoints()[0] = point_0;
		getPoints()[1] = point_1;
		getPoints()[2] = point_2;
		getPoints()[3] = point_3;
	}
	else if (getPointType() == 3) {
		Point point_0(1, 10);
		Point point_1(2, 9);
		Point point_2(2, 10);
		Point point_3(3, 10);
		getPoints()[0] = point_0;
		getPoints()[1] = point_1;
		getPoints()[2] = point_2;
		getPoints()[3] = point_3;
	}
}

SquareShape::SquareShape() {
	Point point_0(1, 9);
	Point point_1(1, 10);
	Point point_2(2, 9);
	Point point_3(2, 10);
	getPoints()[0] = point_0;
	getPoints()[1] = point_1;
	getPoints()[2] = point_2;
	getPoints()[3] = point_3;
}

LShape::LShape() {
	srand(time(NULL));
	int radNum = rand() % 4;
	setPointType(radNum);
	if (getPointType() == 0) {
		Point point_0(1, 9);
		Point point_1(2, 9);
		Point point_2(3, 9);
		Point point_3(3, 10);
		getPoints()[0] = point_0;
		getPoints()[1] = point_1;
		getPoints()[2] = point_2;
		getPoints()[3] = point_3;
	}
	else if (getPointType() == 1) {
		Point point_0(2, 11);
		Point point_1(3, 9);
		Point point_2(3, 10);
		Point point_3(3, 11);
		getPoints()[0] = point_0;
		getPoints()[1] = point_1;
		getPoints()[2] = point_2;
		getPoints()[3] = point_3;
	}
	else if (getPointType() == 2) {
		Point point_0(1, 9);
		Point point_1(1, 10);
		Point point_2(2, 10);
		Point point_3(3, 10);
		getPoints()[0] = point_0;
		getPoints()[1] = point_1;
		getPoints()[2] = point_2;
		getPoints()[3] = point_3;
	}
	else if (getPointType() == 3) {
		Point point_0(1, 9);
		Point point_1(1, 10);
		Point point_2(1, 11);
		Point point_3(2, 9);
		getPoints()[0] = point_0;
		getPoints()[1] = point_1;
		getPoints()[2] = point_2;
		getPoints()[3] = point_3;
	}
}

LShape2::LShape2() {
	srand(time(NULL));
	int radNum = rand() % 4;
	setPointType(radNum);
	if (getPointType() == 0) {
		Point point_0(1, 11);
		Point point_1(2, 11);
		Point point_2(3, 10);
		Point point_3(3, 11);
		getPoints()[0] = point_0;
		getPoints()[1] = point_1;
		getPoints()[2] = point_2;
		getPoints()[3] = point_3;
	}
	else if (getPointType() == 1) {
		Point point_0(1, 9);
		Point point_1(1, 10);
		Point point_2(1, 11);
		Point point_3(2, 11);
		getPoints()[0] = point_0;
		getPoints()[1] = point_1;
		getPoints()[2] = point_2;
		getPoints()[3] = point_3;
	}
	else if (getPointType() == 2) {
		Point point_0(1, 9);
		Point point_1(1, 10);
		Point point_2(2, 9);
		Point point_3(3, 9);
		getPoints()[0] = point_0;
		getPoints()[1] = point_1;
		getPoints()[2] = point_2;
		getPoints()[3] = point_3;
	}
	else if (getPointType() == 3) {
		Point point_0(2, 9);
		Point point_1(3, 9);
		Point point_2(3, 10);
		Point point_3(3, 11);
		getPoints()[0] = point_0;
		getPoints()[1] = point_1;
		getPoints()[2] = point_2;
		getPoints()[3] = point_3;
	}
}

ZShape::ZShape() {
	srand(time(NULL));
	int radNum = rand() % 2;
	setPointType(radNum);
	if (getPointType() == 0) {
		Point point_0(2, 8);
		Point point_1(2, 9);
		Point point_2(3, 9);
		Point point_3(3, 10);
		getPoints()[0] = point_0;
		getPoints()[1] = point_1;
		getPoints()[2] = point_2;
		getPoints()[3] = point_3;
	}
	else if (getPointType() == 1) {
		Point point_0(1, 10);
		Point point_1(2, 9);
		Point point_2(2, 10);
		Point point_3(3, 9);
		getPoints()[0] = point_0;
		getPoints()[1] = point_1;
		getPoints()[2] = point_2;
		getPoints()[3] = point_3;
	}
}

ZShape2::ZShape2() {
	srand(time(NULL));
	int radNum = rand() % 2;
	setPointType(radNum);
	if (getPointType() == 0) {
		Point point_0(2, 10);
		Point point_1(2, 11);
		Point point_2(3, 9);
		Point point_3(3, 10);
		getPoints()[0] = point_0;
		getPoints()[1] = point_1;
		getPoints()[2] = point_2;
		getPoints()[3] = point_3;
	}
	else if (getPointType() == 1) {
		Point point_0(1, 9);
		Point point_1(2, 9);
		Point point_2(2, 10);
		Point point_3(3, 10);
		getPoints()[0] = point_0;
		getPoints()[1] = point_1;
		getPoints()[2] = point_2;
		getPoints()[3] = point_3;
	}
}


void LineShape::reverse_rotate() {
	if (this->getPointType() == 1) {
		Point temp0(getPoints()[0].x - 2, getPoints()[0].y + 2);
		Point temp1(getPoints()[1].x - 1, getPoints()[1].y + 1);
		Point temp2(getPoints()[2].x, getPoints()[2].y);
		Point temp3(getPoints()[3].x + 1, getPoints()[3].y - 1);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(0);
	}
	else if (this->getPointType() == 0) {
		Point temp0(getPoints()[0].x + 2, getPoints()[0].y - 2);
		Point temp1(getPoints()[1].x + 1, getPoints()[1].y - 1);
		Point temp2(getPoints()[2].x, getPoints()[2].y);
		Point temp3(getPoints()[3].x - 1, getPoints()[3].y + 1);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(1);
	}
}


void LineShape::rotate() {
	if (this->getPointType() == 0) {
		Point temp0(getPoints()[0].x + 2, getPoints()[0].y - 2);
		Point temp1(getPoints()[1].x + 1, getPoints()[1].y - 1);
		Point temp2(getPoints()[2].x, getPoints()[2].y);
		Point temp3(getPoints()[3].x - 1, getPoints()[3].y + 1);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(1);
	}
	else if (this->getPointType() == 1) {
		Point temp0(getPoints()[0].x - 2, getPoints()[0].y + 2);
		Point temp1(getPoints()[1].x - 1, getPoints()[1].y + 1);
		Point temp2(getPoints()[2].x, getPoints()[2].y);
		Point temp3(getPoints()[3].x + 1, getPoints()[3].y - 1);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(0);
	}
}

void TShape::rotate() {
	if (this->getPointType() == 0) {
		Point temp0(getPoints()[0].x - 1, getPoints()[0].y + 1);
		getPoints()[0] = temp0;
		setPointType(1);
	}
	else if (this->getPointType() == 1) {
		Point temp1(getPoints()[1].x, getPoints()[1].y - 1);
		Point temp2(getPoints()[2].x, getPoints()[2].y - 1);
		Point temp3(getPoints()[3].x - 1, getPoints()[3].y + 1);
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(2);
	}
	else if (this->getPointType() == 2) {
		Point temp3(getPoints()[3].x + 1, getPoints()[3].y - 1);
		getPoints()[3] = temp3;
		setPointType(3);
	}
	else if (this->getPointType() == 3) {
		Point temp0(getPoints()[0].x + 1, getPoints()[0].y - 1);
		Point temp1(getPoints()[1].x, getPoints()[1].y + 1);
		Point temp2(getPoints()[2].x, getPoints()[2].y + 1);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		setPointType(0);
	}
}

void SquareShape::rotate() {
}

void LShape::rotate() {
	if (this->getPointType() == 0) {
		Point temp0(getPoints()[0].x + 1, getPoints()[0].y + 2);
		Point temp1(getPoints()[1].x + 1, getPoints()[1].y);
		Point temp2(getPoints()[2].x, getPoints()[2].y + 1);
		Point temp3(getPoints()[3].x, getPoints()[3].y + 1);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(1);
	}
	else if (this->getPointType() == 1) {
		Point temp0(getPoints()[0].x - 1, getPoints()[0].y - 1);
		Point temp1(getPoints()[1].x - 2, getPoints()[1].y + 2);
		Point temp2(getPoints()[2].x - 1, getPoints()[2].y + 1);
		Point temp3(getPoints()[3].x, getPoints()[3].y);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(2);
	}
	else if (this->getPointType() == 2) {
		Point temp0(getPoints()[0].x, getPoints()[0].y - 1);
		Point temp1(getPoints()[1].x, getPoints()[1].y - 1);
		Point temp2(getPoints()[2].x - 1, getPoints()[2].y);
		Point temp3(getPoints()[3].x - 1, getPoints()[3].y - 2);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(3);
	}
	else if (this->getPointType() == 3) {
		Point temp1(getPoints()[1].x + 1, getPoints()[1].y - 1);
		Point temp2(getPoints()[2].x + 2, getPoints()[2].y - 2);
		Point temp3(getPoints()[3].x + 1, getPoints()[3].y + 1);
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(0);
	}
}

void LShape2::rotate() {
	if (this->getPointType() == 0) {
		Point temp0(getPoints()[0].x, getPoints()[0].y - 2);
		Point temp1(getPoints()[1].x - 1, getPoints()[1].y - 1);
		Point temp2(getPoints()[2].x - 2, getPoints()[2].y + 1);
		Point temp3(getPoints()[3].x - 1, getPoints()[3].y);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(1);
	}
	else if (this->getPointType() == 1) {
		Point temp2(getPoints()[2].x + 1, getPoints()[2].y - 2);
		Point temp3(getPoints()[3].x + 1, getPoints()[3].y - 2);
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(2);
	}
	else if (this->getPointType() == 2) {
		Point temp0(getPoints()[0].x + 1, getPoints()[0].y);
		Point temp1(getPoints()[1].x + 2, getPoints()[1].y - 1);
		Point temp2(getPoints()[2].x + 1, getPoints()[2].y + 1);
		Point temp3(getPoints()[3].x, getPoints()[3].y + 2);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(3);
	}
	else if (this->getPointType() == 3) {
		Point temp0(getPoints()[0].x - 1, getPoints()[0].y + 2);
		Point temp1(getPoints()[1].x - 1, getPoints()[1].y + 2);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		setPointType(0);
	}
}

void ZShape::rotate() {
	if (this->getPointType() == 0) {
		Point temp0(getPoints()[0].x - 1, getPoints()[0].y + 2);
		Point temp2(getPoints()[2].x - 1, getPoints()[2].y + 1);
		Point temp3(getPoints()[3].x, getPoints()[3].y - 1);
		getPoints()[0] = temp0;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(1);
	}
	else if (this->getPointType() == 1) {
		Point temp0(getPoints()[0].x + 1, getPoints()[0].y - 2);
		Point temp2(getPoints()[2].x + 1, getPoints()[2].y - 1);
		Point temp3(getPoints()[3].x, getPoints()[3].y + 1);
		getPoints()[0] = temp0;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(0);
	}
}

void ZShape2::rotate() {
	if (this->getPointType() == 0) {
		Point temp0(getPoints()[0].x - 1, getPoints()[0].y - 1);
		Point temp1(getPoints()[1].x, getPoints()[1].y - 2);
		Point temp2(getPoints()[2].x - 1, getPoints()[2].y + 1);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		setPointType(1);
	}
	else if (this->getPointType() == 1) {
		Point temp0(getPoints()[0].x + 1, getPoints()[0].y + 1);
		Point temp1(getPoints()[1].x, getPoints()[1].y + 2);
		Point temp2(getPoints()[2].x + 1, getPoints()[2].y - 1);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		setPointType(0);
	}
}


void TShape::reverse_rotate() {
	if (this->getPointType() == 1) {
		Point temp0(getPoints()[0].x + 1, getPoints()[0].y - 1);
		getPoints()[0] = temp0;
		setPointType(0);
	}
	else if (this->getPointType() == 2) {
		Point temp1(getPoints()[1].x, getPoints()[1].y + 1);
		Point temp2(getPoints()[2].x, getPoints()[2].y + 1);
		Point temp3(getPoints()[3].x + 1, getPoints()[3].y - 1);
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(1);
	}
	else if (this->getPointType() == 3) {
		Point temp3(getPoints()[3].x - 1, getPoints()[3].y + 1);
		getPoints()[3] = temp3;
		setPointType(2);
	}
	else if (this->getPointType() == 0) {
		Point temp0(getPoints()[0].x - 1, getPoints()[0].y + 1);
		Point temp1(getPoints()[1].x, getPoints()[1].y - 1);
		Point temp2(getPoints()[2].x, getPoints()[2].y - 1);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		setPointType(3);
	}
}

void SquareShape::reverse_rotate() {
}

void LShape::reverse_rotate() {
	if (this->getPointType() == 1) {
		Point temp0(getPoints()[0].x - 1, getPoints()[0].y - 2);
		Point temp1(getPoints()[1].x - 1, getPoints()[1].y);
		Point temp2(getPoints()[2].x, getPoints()[2].y - 1);
		Point temp3(getPoints()[3].x, getPoints()[3].y - 1);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(0);
	}
	else if (this->getPointType() == 2) {
		Point temp0(getPoints()[0].x + 1, getPoints()[0].y + 1);
		Point temp1(getPoints()[1].x + 2, getPoints()[1].y - 2);
		Point temp2(getPoints()[2].x + 1, getPoints()[2].y - 1);
		Point temp3(getPoints()[3].x, getPoints()[3].y);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(1);
	}
	else if (this->getPointType() == 3) {
		Point temp0(getPoints()[0].x, getPoints()[0].y + 1);
		Point temp1(getPoints()[1].x, getPoints()[1].y + 1);
		Point temp2(getPoints()[2].x + 1, getPoints()[2].y);
		Point temp3(getPoints()[3].x + 1, getPoints()[3].y + 2);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(2);
	}
	else if (this->getPointType() == 0) {
		Point temp1(getPoints()[1].x - 1, getPoints()[1].y + 1);
		Point temp2(getPoints()[2].x - 2, getPoints()[2].y + 2);
		Point temp3(getPoints()[3].x - 1, getPoints()[3].y - 1);
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(3);
	}
}

void LShape2::reverse_rotate() {
	if (this->getPointType() == 1) {
		Point temp0(getPoints()[0].x, getPoints()[0].y + 2);
		Point temp1(getPoints()[1].x + 1, getPoints()[1].y + 1);
		Point temp2(getPoints()[2].x + 2, getPoints()[2].y - 1);
		Point temp3(getPoints()[3].x + 1, getPoints()[3].y);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(0);
	}
	else if (this->getPointType() == 2) {
		Point temp2(getPoints()[2].x - 1, getPoints()[2].y + 2);
		Point temp3(getPoints()[3].x - 1, getPoints()[3].y + 2);
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(1);
	}
	else if (this->getPointType() == 3) {
		Point temp0(getPoints()[0].x - 1, getPoints()[0].y);
		Point temp1(getPoints()[1].x - 2, getPoints()[1].y + 1);
		Point temp2(getPoints()[2].x - 1, getPoints()[2].y - 1);
		Point temp3(getPoints()[3].x, getPoints()[3].y - 2);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(2);
	}
	else if (this->getPointType() == 0) {
		Point temp0(getPoints()[0].x + 1, getPoints()[0].y - 2);
		Point temp1(getPoints()[1].x + 1, getPoints()[1].y - 2);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		setPointType(3);
	}
}

void ZShape::reverse_rotate() {
	if (this->getPointType() == 1) {
		Point temp0(getPoints()[0].x + 1, getPoints()[0].y - 2);
		Point temp2(getPoints()[2].x + 1, getPoints()[2].y - 1);
		Point temp3(getPoints()[3].x, getPoints()[3].y + 1);
		getPoints()[0] = temp0;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(0);
	}
	else if (this->getPointType() == 0) {
		Point temp0(getPoints()[0].x - 1, getPoints()[0].y + 2);
		Point temp2(getPoints()[2].x - 1, getPoints()[2].y + 1);
		Point temp3(getPoints()[3].x, getPoints()[3].y - 1);
		getPoints()[0] = temp0;
		getPoints()[2] = temp2;
		getPoints()[3] = temp3;
		setPointType(1);
	}
}

void ZShape2::reverse_rotate() {
	if (this->getPointType() == 1) {
		Point temp0(getPoints()[0].x + 1, getPoints()[0].y + 1);
		Point temp1(getPoints()[1].x, getPoints()[1].y + 2);
		Point temp2(getPoints()[2].x + 1, getPoints()[2].y - 1);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		setPointType(0);
	}
	else if (this->getPointType() == 0) {
		Point temp0(getPoints()[0].x - 1, getPoints()[0].y - 1);
		Point temp1(getPoints()[1].x, getPoints()[1].y - 2);
		Point temp2(getPoints()[2].x - 1, getPoints()[2].y + 1);
		getPoints()[0] = temp0;
		getPoints()[1] = temp1;
		getPoints()[2] = temp2;
		setPointType(1);
	}
}
