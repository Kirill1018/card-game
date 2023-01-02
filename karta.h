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
/*0 � ������
1 � �����
2 � �������
3 � �������
4 � �������
5 � �������
6 � ������
7 � �����
8 � �����
9 � ����� - �����
A � ������ - �������
B � ������ - �������
� � ������ - �������
E � ������ - ������
F � ���� - �����
system("color F0");*/  // ��������� ������ ���� � ������� ������
class karta
{
public:
	karta() {};
	int peak_six = 6, peak_sev = 7, peak_eight = 8, peak_nine = 9, peak_ten = 10, peak_jack = 11, peak_lady = 12, peak_king = 13, peak_ace = 14, heart_six = 6, heart_sev = 7, heart_eight = 8, heart_nine = 9, heart_ten = 10, heart_jack = 11, heart_lady = 12, heart_king = 13, heart_ace = 14, tamb_six = 6, tamb_sev = 7, tamb_eight = 8, tamb_nine = 9, tamb_ten = 10, tamb_jack = 11, tamb_lady = 12, tamb_king = 13, tamb_ace = 14, club_six = 13, club_sev = 15, club_eight = 16, club_nine = 17, club_ten = 18, club_jack = 19, club_lady = 20, club_king = 21, club_ace = 22;
};