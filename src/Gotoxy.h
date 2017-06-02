#ifndef GOTOXY_H
#define GOTOXY_H

#include<windows.h>
void HideCursor()
{
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

void Gotoxy(int x, int y) // �ƶ����
{
	HANDLE hout; // ����������hout
	COORD coord; // ����ṹ��coord
	coord.Y = x;
	coord.X = y;
	hout = GetStdHandle(STD_OUTPUT_HANDLE); // ��ñ�׼�������Ļ�����
	SetConsoleCursorPosition(hout, coord); // �ƶ����
}

#endif
