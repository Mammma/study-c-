#pragma once 
#include "Lib.h"

class Card {
public:
	Suit suit;
	int point;
	Face name;

	Card();
	int getPoint()const;
	Suit getSuit()const;
	Face getFace()const;
	void ShowCard()const;
};

class Deck {
private:
	Card deck[52];
	int count;
	int sum;
public:
	Deck();
	void FillDeck();
	void ShowDeck();
	void ShuffleDeck();

};