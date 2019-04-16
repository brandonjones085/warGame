/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/015/2019
** Description:  The main file for the warGame
*******************************************************************************/

#include "loadedDie.h"
#include "game.h"
#include <iostream>

int main()
{
	Game g;

	int menu = g.menu();

	while (menu == 1)
	{
		g.setRounds();
		g.setType();
		g.setNumberOfSidesPlayer1();
		int num1 = g.getNumberOfSidesPlayer1();

		g.setNumberOfSidesPlayer2();
		int num2 = g.getNumberOfSidesPlayer2();

		Die d(num1);
		LoadedDie ld(num2);

		std::cout << "Play again?" << std::endl;
		std::cout << "Enter 1 to go again " << std::endl;
		std::cout << "Enter 2 to quit " << std::endl;
		std::cin >> menu;
	}
	std::cout << "Goodbye";

	return 0;
}
