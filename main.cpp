/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/015/2019
** Description:  The main file for the warGame
*******************************************************************************/

#include "die.h"
#include "loadedDie.h"
#include "game.h"
#include <iostream>

int main()
{

	Die d(6);
	LoadedDie m;
	Game g;

	int test = d.randInt();

	int menu = g.menu();
	m.randIntHigher();
	while (menu == 1)
	{
		std::cout << "Run game";
	}
	std::cout << "Goodbye";

	return 0;
}
