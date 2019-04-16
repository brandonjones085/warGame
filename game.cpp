/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/015/2019
** Description:  The loadedDie class
*******************************************************************************/
#include "game.h"
#include <iostream>

int Game::menu()
{
    int choice;
    std::cout << "Please select an option " << std::endl;
    std::cout << "Enter 1 to play game " << std::endl;
    std::cout << "Enter 2 to exit game " << std::endl;
    std::cin >> choice;
    return choice;
}

void Game::setNumberOfSidesPlayer1()
{
    std::cout << "Enter the number of sides for dice player 1 ";
    std::cin >> numberOfSidesPlayer1;
}

int Game::getNumberOfSidesPlayer1()
{
    return numberOfSidesPlayer1;
}

void Game::setNumberOfSidesPlayer2()
{
    std::cout << "Enter the number of sides for dice of player 2 ";
    std::cin >> numberOfSidesPlayer2;
}

int Game::getNumberOfSidesPlayer2()
{
    return numberOfSidesPlayer2;
}

void Game::setPlayer1Point(int point)
{
    this->player1Point = point;
}

int Game::getPlayer1Point()
{
    return player1Point;
}

void Game::setPlayer2Point(int point)
{
    this->player2Point = point;
}

int Game::getPlayer2Point()
{
    return player2Point;
}

void Game::setRounds()
{
    std::cout << "Enter the number of rounds: ";
    std::cin >> rounds;
}

int Game::getRounds()
{
    return rounds;
}

void Game::setType()
{
    std::cout << "Enter the type of die for each player: ";
    std::cin >> type;
}

int Game::getType()
{
    return type;
}
