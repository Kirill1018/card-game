#pragma once
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
enum ConsoleColor {
	Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,
	LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};
void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void GotoXY(int X, int Y)
{
	HANDLE hConsole;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}
#include <stdio.h>
/*0 Ч черный
1 Ч синий
2 Ч зеленый
3 Ч голубой
4 Ч красный
5 Ч лиловый
6 Ч желтый
7 Ч белый
8 Ч серый
9 Ч свело - синий
A Ч светло - зеленый
B Ч светло - голубой
— Ч светло - красный
E Ч светло - желтый
F Ч €рко - белый
system("color F0");*/  // ”становка белого фона и черного текста
class karta
{
public:
	karta() {};
	int peak_six = 6, peak_sev = 7, peak_eight = 8, peak_nine = 9, peak_ten = 10, peak_jack = 11, peak_lady = 12, peak_king = 13, peak_ace = 14, heart_six = 6, heart_sev = 7, heart_eight = 8, heart_nine = 9, heart_ten = 10, heart_jack = 11, heart_lady = 12, heart_king = 13, heart_ace = 14, tamb_six = 6, tamb_sev = 7, tamb_eight = 8, tamb_nine = 9, tamb_ten = 10, tamb_jack = 11, tamb_lady = 12, tamb_king = 13, tamb_ace = 14, club_six = 13, club_sev = 15, club_eight = 16, club_nine = 17, club_ten = 18, club_jack = 19, club_lady = 20, club_king = 21, club_ace = 22;
};