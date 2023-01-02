#pragma once
#include "karta.h"
class player : public karta
{
public:
	player() {};
	karta card;
	void output_of_avail_cards()
	{
		SetColor(1, 0);
		cout << "card.peak_six, card.peak_sev, card.peak_eight, card.peak_nine, card.peak_ten, card.peak_jack, card.peak_lady, card.peak_king, card.peak_ace, card.heart_six, card.heart_sev, card.heart_eight, card.heart_nine, card.heart_ten, card.heart_jack , card.heart_lady, card.heart_king, card.heart_ace, card.tamb_six, card.tamb_sev, card.tamb_eight, card.tamb_nine, card.tamb_ten, card.tamb_jack, card.tamb_lady, card.tamb_king, card.tamb_ace, card.club_six, card.club_sev, card.club_eight, card.club_nine, card.club_ten, card.club_jack, card.club_lady, card.club_king, card.club_ace";
	}
};