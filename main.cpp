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
		int rounds = g.getRounds();

		g.setType();

		g.setNumberOfSidesPlayer1();
		int num1 = g.getNumberOfSidesPlayer1();

		g.setNumberOfSidesPlayer2();
		int num2 = g.getNumberOfSidesPlayer2();

		Die d(num1);
		LoadedDie ld(num2);

		for (int i = 0; i < rounds; i++)
		{

			std::cout << "Player 1 Points: " << g.getPlayer1Point() << std::endl;
			std::cout << "Player 2 Points: " << g.getPlayer2Point() << std::endl;

			int one = ld.randIntHigher();
			int two = d.randInt();
			int point1 = 0;
			int point2 = 0;

			if (one > two)
			{
				point1 += 1;
				g.setPlayer1Point(point1);
			}
			else
			{
				point2 += 2;
				g.setPlayer2Point(point2);
			}

			std::cout << "Player 1 rolled " << one << std::endl;
			std::cout << "Player 2 rolled " << two << std::endl;
		}

		std::cout << "Play again?" << std::endl;
		std::cout << "Enter 1 to go again " << std::endl;
		std::cout << "Enter 2 to quit " << std::endl;
		std::cin >> menu;
	}
	std::cout << "Goodbye";

	return 0;
}
