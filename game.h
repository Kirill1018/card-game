#pragma once
#include "player.h"
class game : public player
{
public:
	game() {};
	void match()
	{
		player gamer;
		gamer.output_of_avail_cards();
		cout << endl << endl;
		vector <string> play_list = { "first player", "second player" };
		vector <int> card_deck = { card.peak_jack, card.peak_lady, card.peak_king, card.peak_ace, card.heart_jack, card.heart_lady, card.heart_king, card.heart_ace, card.tamb_jack, card.tamb_lady, card.tamb_king, card.tamb_ace, card.club_jack, card.club_lady, card.club_king, card.club_ace }, card_shuffl = { card.club_ace, card.club_king, card.club_lady, card.club_jack, card.tamb_ace, card.tamb_king, card.tamb_lady, card.tamb_jack, card.heart_ace, card.heart_king, card.heart_lady, card.heart_jack, card.peak_ace, card.peak_king, card.peak_lady, card.peak_jack }, cards_of_the_first_play = { card.club_ace, card.club_king, card.club_lady, card.club_jack, card.tamb_ace, card.tamb_king, card.tamb_lady, card.tamb_jack }, cards_of_the_sec_play = { card.heart_ace, card.heart_king, card.heart_lady, card.heart_jack, card.peak_ace, card.peak_king, card.peak_lady, card.peak_jack }, battlefield;
		int score_amount_1 = 8, score_amount_2 = 8, turn_1, turn_2;
		bool random;
		random = rand() % 2;
		switch (random)
		{
		case 0:
		{
			turn_1 = card.club_ace;
			SetColor(2, 0);
			cout << "card.club_ace" << endl;
			turn_2 = card.club_eight;
			SetColor(3, 0);
			cout << "card.club_eight" << endl << endl;
			if (turn_1 > turn_2)
			{
				score_amount_1++;
				score_amount_2--;
			}
			else
			{
				score_amount_1--;
				score_amount_2++;
			}
			turn_1 = card.club_jack;
			SetColor(4, 0);
			cout << "card.club_jack" << endl;
			turn_2 = card.club_king;
			SetColor(5, 0);
			cout << "card.club_king" << endl << endl;
			if (turn_1 > turn_2)
			{
				score_amount_1++;
				score_amount_2--;
			}
			else
			{
				score_amount_1--;
				score_amount_2++;
			}
			turn_1 = card.club_lady;
			SetColor(6, 0);
			cout << "card.club_lady" << endl;
			turn_2 = card.club_nine;
			SetColor(7, 0);
			cout << "card.club_nine" << endl << endl;
			if (turn_1 > turn_2)
			{
				score_amount_1++;
				score_amount_2--;
			}
			else
			{
				score_amount_1--;
				score_amount_2++;
			}
			turn_1 = card.club_sev;
			SetColor(8, 0);
			cout << "card.club_sev" << endl;
			turn_2 = card.club_six;
			SetColor(9, 0);
			cout << "card.club_six" << endl << endl;
			if (turn_1 > turn_2)
			{
				score_amount_1++;
				score_amount_2--;
			}
			else
			{
				score_amount_1--;
				score_amount_2++;
			}
			turn_1 = card.club_ten;
			SetColor(10, 0);
			cout << "card.club_ten" << endl;
			turn_2 = card.heart_ace;
			SetColor(11, 0);
			cout << "card.heart_ace" << endl << endl;
			if (turn_1 > turn_2)
			{
				score_amount_1++;
				score_amount_2--;
			}
			else
			{
				score_amount_1--;
				score_amount_2++;
			}
			turn_1 = card.heart_eight;
			SetColor(12, 0);
			cout << "card.heart_eight" << endl;
			turn_2 = card.heart_jack;
			SetColor(13, 0);
			cout << "card.heart_jack" << endl << endl;
			if (turn_1 > turn_2)
			{
				score_amount_1++;
				score_amount_2--;
			}
			else
			{
				score_amount_1--;
				score_amount_2++;
			}
			turn_1 = card.heart_king;
			SetColor(14, 0);
			cout << "card.heart_king" << endl;
			turn_2 = card.heart_lady;
			SetColor(15, 0);
			cout << "card.heart_lady" << endl << endl;
			if (turn_1 > turn_2)
			{
				score_amount_1++;
				score_amount_2--;
			}
			else
			{
				score_amount_1--;
				score_amount_2++;
			}
			turn_1 = card.heart_nine;
			cout << "card.heart_nine" << endl;
			turn_2 = card.heart_sev;
			cout << "card.heart_sev" << endl << endl;
			if (turn_1 > turn_2)
			{
				score_amount_1++;
				score_amount_2--;
			}
			else
			{
				score_amount_1--;
				score_amount_2++;
			}
			turn_1 = card.heart_six;
			cout << "card.heart_six" << endl;
			turn_2 = card.heart_ten;
			cout << "card.heart_ten" << endl << endl;
			if (turn_1 > turn_2)
			{
				score_amount_1++;
				score_amount_2--;
			}
			else
			{
				score_amount_1--;
				score_amount_2++;
			}
			turn_1 = card.peak_ace;
			cout << "card.peak_ace" << endl;
			turn_2 = card.peak_eight;
			cout << "card.peak_eight" << endl << endl;
			if (turn_1 > turn_2)
			{
				score_amount_1++;
				score_amount_2--;
			}
			else
			{
				score_amount_1--;
				score_amount_2++;
			}
			if (score_amount_1 > score_amount_2) cout << "первый игрок победил" << endl;
			else cout << "второй игрок победил" << endl;
			break;
		}
case 1:
{
	turn_1 = card.peak_eight;
	cout << "card.peak_eight" << endl;
	turn_2 = card.peak_ace;
	cout << "card.peak_ace" << endl << endl;
	if (turn_1 > turn_2)
	{
		score_amount_1++;
		score_amount_2--;
	}
	else
	{
		score_amount_1--;
		score_amount_2++;
	}
	turn_1 = card.peak_king;
	cout << "card.peak_king" << endl;
	turn_2 = card.peak_jack;
	cout << "card.peak_jack" << endl << endl;
	if (turn_1 > turn_2)
	{
		score_amount_1++;
		score_amount_2--;
	}
	else
	{
		score_amount_1--;
		score_amount_2++;
	}
	turn_1 = card.peak_nine;
	cout << "card.peak_nine" << endl;
	turn_2 = card.peak_lady;
	cout << "card.peak_lady" << endl << endl;
	if (turn_1 > turn_2)
	{
		score_amount_1++;
		score_amount_2--;
	}
	else
	{
		score_amount_1--;
		score_amount_2++;
	}
	turn_1 = card.peak_six;
	cout << "card.peak_six" << endl;
	turn_2 = card.peak_sev;
	cout << "card.peak_sev" << endl << endl;
	if (turn_1 > turn_2)
	{
		score_amount_1++;
		score_amount_2--;
	}
	else
	{
		score_amount_1--;
		score_amount_2++;
	}
	turn_1 = card.tamb_ace;
	cout << "card.tamb_ace" << endl;
	turn_2 = card.peak_ten;
	cout << "card.peak_ten" << endl << endl;
	if (turn_1 > turn_2)
	{
		score_amount_1++;
		score_amount_2--;
	}
	else
	{
		score_amount_1--;
		score_amount_2++;
	}
	turn_1 = card.tamb_jack;
	cout << "card.tamb_jack" << endl;
	turn_2 = card.tamb_eight;
	cout << "card.tamb_eight" << endl << endl;
	if (turn_1 > turn_2)
	{
		score_amount_1++;
		score_amount_2--;
	}
	else
	{
		score_amount_1--;
		score_amount_2++;
	}
	turn_1 = card.tamb_lady;
	cout << "card.tamb_lady" << endl;
	turn_2 = card.tamb_king;
	cout << "card.tamb_king" << endl << endl;
	if (turn_1 > turn_2)
	{
		score_amount_1++;
		score_amount_2--;
	}
	else
	{
		score_amount_1--;
		score_amount_2++;
	}
	turn_1 = card.tamb_sev;
	cout << "card.tamb_sev" << endl;
	turn_2 = card.tamb_nine;
	cout << "card.tamb_nine" << endl << endl;
	if (turn_1 > turn_2)
	{
		score_amount_1++;
		score_amount_2--;
	}
	else
	{
		score_amount_1--;
		score_amount_2++;
	}
	turn_1 = card.tamb_ten;
	cout << "card.tamb_ten" << endl;
	turn_2 = card.tamb_six;
	cout << "card.tamb_six" << endl << endl;
	if (turn_1 > turn_2)
	{
		score_amount_1++;
		score_amount_2--;
	}
	else
	{
		score_amount_1--;
		score_amount_2++;
	}
	turn_1 = card.heart_six;
	cout << "card.heart_six" << endl;
	turn_2 = card.heart_ten;
	cout << "card.heart_ten" << endl << endl;
	if (score_amount_1 > score_amount_2) cout << "первый игрок победил" << endl;
	else cout << "второй игрок победил" << endl;
	break;
}
}
}
};