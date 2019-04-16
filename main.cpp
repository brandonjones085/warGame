/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/15/2019
** Description:  The main file for the warGame
*******************************************************************************/

#include "loadedDie.h"
#include "game.h"
#include <iostream>

int main()
{
	//Creates game object
	Game g;

	//Runs the menu and returns an int...1 to play and 2 to quit
	int menu = g.menu();

	while (menu == 1)
	{
		//Asks user for number of rounds
		g.setRounds();
		int rounds = g.getRounds();

		//Asks user for the number of sides for player 1
		g.setNumberOfSidesPlayer1();
		int num1 = g.getNumberOfSidesPlayer1();

		//Asks user for the number of sides for player 2
		g.setNumberOfSidesPlayer2();
		int num2 = g.getNumberOfSidesPlayer2();

		//sets points to zero
		int point1 = 0;
		int point2 = 0;

		//Loops through game according to number of rounds set
		for (int i = 1; i <= rounds; i++)
		{
			g.setPlayer1Roll(1, num1);
			int one = g.getPlayer1Roll();

			g.setPlayer2Roll(2, num2);
			int two = g.getPlayer2Roll();

			//Determines whether player 1 or player 2 rolled a higher value. If there is a tie, neither player gains a point.
			if (one > two)
			{
				point1 += 1;
				g.setPlayer1Point(point1);
			}
			else if (two > one)
			{
				point2 += 1;
				g.setPlayer2Point(point2);
			}
			else
			{
				std::cout << "It was a tie! Neither player gains a point \n";
			}

			//Output showing number of round, number rolled for each player, and number of points
			std::cout << "\nRound number: " << i << std::endl;
			std::cout << "\nPlayer 1 rolled " << one << std::endl;
			std::cout << "Player 2 rolled " << two << std::endl;
			std::cout << "\nPlayer 1 Points: " << g.getPlayer1Point() << std::endl;
			std::cout << "Player 2 Points: " << g.getPlayer2Point() << std::endl;
			std::cin.clear();
			std::cin.sync();
			std::cin.ignore();
		}

		//Determines the winner according to who has more points
		if (g.getPlayer1Point() > g.getPlayer2Point())
		{
			std::cout << "\nPlayer 1 wins! " << g.getPlayer1Point() << " points " << std::endl
					  << std::endl;
		}
		else
		{
			std::cout << "\nPlayer 2 wins with " << g.getPlayer2Point() << " points " << std::endl
					  << std::endl;
		}

		//Asks user to play again. If 1 is entered, the loop will run again. If 2 is entered the game will quit
		std::cout << "Play again?" << std::endl;
		std::cout << "Enter 1 to go again " << std::endl;
		std::cout << "Enter 2 to quit " << std::endl;
		std::cin >> menu;
		point1 = 0;
		point2 = 0;
	}
	std::cout << "Goodbye";

	return 0;
}
