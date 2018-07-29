#pragma once
#include "Card.h"

Deck::Deck(){
	for (int i = 0; i < 52; i++){
		deck[i].suit = NS;
		deck[i].point = 0;
		deck[i].name = Zero;
	}
	count = 0;
	sum = 0;
	FillDeck();
	ShuffleDeck();
}

void Deck::FillDeck(){
	for (int i = 0; i < 4; i++)
		for (int n = 0; n < 13; n++){
			deck[i * 13 + n].suit = Suit(i + 3);
			if (n < 9){
				deck[i * 13 + n].name = Face(n + 50);
				deck[i * 13 + n].point = n + 2;
			}
			else if (n == 9){
				deck[i * 13 + n].name = Jack;
				deck[i * 13 + n].point = 10;
			}
			else if (n == 10){
				deck[i * 13 + n].name = Queen;
				deck[i * 13 + n].point = 10;
			}
			else if (n == 11){
				deck[i * 13 + n].name = King;
				deck[i * 13 + n].point = 10;
			}
			else if (n == 12){
				deck[i * 13 + n].name = Ace;
				deck[i * 13 + n].point = 11;
			}
			count++;
			sum += deck[i * 13 + n].point;
		}
}
void Deck::ShowDeck(){
	for (int i = 0; i < count; i++){
		deck[i].ShowCard();
	}
}
void Deck::ShuffleDeck(){
	srand(time(NULL));
	Card temp;
	for (int i = 0; i < 52; i++){
		int j = rand() % 52;
		temp = deck[i];
		deck[i] = deck[j];
		deck[j] = temp;
	}
}