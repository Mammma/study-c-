#pragma once
#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

enum Suit{
	Heart = 3,
	Club = 4,
	Diamond = 5,
	Spade = 6,
	NS = 255
};

enum Color {
	Red = 12,
	Black = 8,
	White = 7,
	Yellow = 6
};

enum Face {
	Deuce = 50,
	Three = 51,
	Four = 52,
	Five = 53,
	Six = 54,
	Seven = 55,
	Eight = 56,
	Nine = 57,
	Ten = 58,
	Jack = 74,
	Queen = 81,
	King = 75,
	Ace = 84,
	Zero = 255
};