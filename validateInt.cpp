#include "validateInt.h"
#include <iostream>

void validateInt(int i)
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