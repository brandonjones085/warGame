/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/15/2019
** Description:  The game class used in the main file to play the game
*******************************************************************************/
#include "game.h"
#include "loadedDie.h"
#include "die.h"
#include <iostream>

//Description: This the menu function which returns and int. If 1 is returned, the game will run. If 2 is returned the game will quit
int Game::menu()
{
    int choice;
    std::cout << "Please select an option " << std::endl;
    std::cout << "Enter 1 to play game " << std::endl;
    std::cout << "Enter 2 to exit game " << std::endl;
    std::cin >> choice;
    validateInt(choice);
    return choice;
}

void Game::validateInt(int i)
{
    while (!std::cin || (i != 1 && i != 2))
    {
        std::cin.clear();
        std::cin.sync();
        //std::cin.ignore();
        std::cout << "\nInvalid input! Try again: ";
        std::cin >> i;
    }
}

//Sets the number of sides for player 1
void Game::setNumberOfSidesPlayer1()
{
    std::cout << "Enter the number of sides for dice player 1: ";
    std::cin >> numberOfSidesPlayer1;
    validateNumOfSides(numberOfSidesPlayer1);
}

void Game::validateNumOfSides(int num)
{

    while (!std::cin || (num < 1 || num > 20))
    {
        std::cin.clear();
        std::cin.sync();
        std::cout << "\nInvalid input! Try again: ";
        std::cin >> num;
    }
}

int Game::getNumberOfSidesPlayer1()
{
    return numberOfSidesPlayer1;
}

//Sets the number of sides for player 2
void Game::setNumberOfSidesPlayer2()
{
    std::cout << "Enter the number of sides for dice of player 2: ";
    std::cin >> numberOfSidesPlayer2;
    validateNumOfSides(numberOfSidesPlayer2);
}

int Game::getNumberOfSidesPlayer2()
{
    return numberOfSidesPlayer2;
}

//Takes in an int and adds it to the total number of points for player 1
void Game::setPlayer1Point(int point)
{
    this->player1Point = point;
}

int Game::getPlayer1Point()
{
    return player1Point;
}

//Takes in an int and adds it to the total number of points for player 2
void Game::setPlayer2Point(int point)
{
    this->player2Point = point;
}

int Game::getPlayer2Point()
{
    return player2Point;
}

//Sets the number of rounds according to the value the user enters
void Game::setRounds()
{
    std::cout << "Enter the number of rounds: ";
    std::cin >> rounds;
    validateRounds(rounds);
}

void validateRounds(int num)
{
    while (!std::cin || (num < 1 || num > 100))
    {
        std::cin.clear();
        std::cin.sync();
        std::cout << "\nInvalid input! Try again: ";
        std::cin >> num;
    }
}

int Game::getRounds()
{
    return rounds;
}

//Returns an int. If 1 is returned, the main.cpp file will create a Die() object, if 2 is returned, a LoadedDie() object will be created.
void Game::setTypePlayer1()
{
    std::cout << "\nEnter the type of die for player 1\n";
    std::cout << "Enter 1 for regualr die\n";
    std::cout << "Enter 2 for loaded die\n";
    std::cin >> player1Type;

    if (player1Type == 1)
    {
        Die p1(numberOfSidesPlayer1);
        std::cout << "Regular die\n";
    }
    else
    {
        LoadedDie p1(numberOfSidesPlayer1);
        std::cout << "Loaded die\n";
    }
}

void Game::setPlayer1Roll(int num, int sides)
{

    if (num == 1)
    {
        Die p(sides);
        player1Roll = p.randInt();
    }
    else
    {
        LoadedDie p(sides);
        player1Roll = p.randIntHigher();
    }
}

int Game::getPlayer1Roll()
{
    return player1Roll;
}

void Game::setPlayer2Roll(int num, int sides)
{

    if (num == 1)
    {
        Die p(sides);
        player2Roll = p.randInt();
    }
    else
    {
        LoadedDie p(sides);
        player2Roll = p.randIntHigher();
    }
}

int Game::getPlayer2Roll()
{
    return player2Roll;
}
