// main.cpp
#include <iostream>
#include "golf.h"
int const Size = 3;
int main()
{
	golf players[Size];
	golf one_player;
	int entered = Size;
	for (int i = 0; i < Size; ++i)
	{
		if (!(setgolf(players[i])))
		{
			entered = i;
			break;
		}
		handicap(players[i], players[i].handicap + 1);
	}
	setgolf(one_player, "Farrell Meng", 100);
	for (int i = 0; i < entered; ++i)
		showgolf(players[i]);
	showgolf(one_player);
	return 0;
}