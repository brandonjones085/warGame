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
