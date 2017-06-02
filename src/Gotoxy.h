#ifndef GOTOXY_H
#define GOTOXY_H

#include<windows.h>
void HideCursor()
{
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

void Gotoxy(int x, int y) // 移动光标
{
	HANDLE hout; // 定义句柄变量hout
	COORD coord; // 定义结构体coord
	coord.Y = x;
	coord.X = y;
	hout = GetStdHandle(STD_OUTPUT_HANDLE); // 获得标准输出（屏幕）句柄
	SetConsoleCursorPosition(hout, coord); // 移动光标
}

#endif
