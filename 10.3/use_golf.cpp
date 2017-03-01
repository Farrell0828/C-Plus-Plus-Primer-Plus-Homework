// use_golf.cpp -- using class golf
#include "golf.h"
int const Size = 3;
int main()
{
	Golf players[Size];
	Golf one_player = { "Farrell Meng", 100 };
	int entered = Size;
	for (int i = 0; i < Size; ++i)
	{
		if (!players[i].SetGolf())
		{
			entered = i;
			break;
		}
		players[i].SetHandicap(players[i].GetHandicap() + 1);
	}
	for (int i = 0; i < entered; ++i)
		players[i].ShowGolf();
	one_player.ShowGolf();
	return 0;
}