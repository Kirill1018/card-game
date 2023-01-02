#include "game.h"
void main()
{
	srand(time(0));
	setlocale(LC_ALL, "ru");
	game play;
	play.match();
}