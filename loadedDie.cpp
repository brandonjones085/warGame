/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/015/2019
** Description:  The loadedDie class
*******************************************************************************/

#include "loadedDie.h"
#include <iostream>

LoadedDie::LoadedDie()
{
    srand(time(NULL));
}

void LoadedDie::randIntHigher()
{
    int num;
    int n = 6;

    num = std::rand() % 6 + 1;

    std::cout << "Number is " << num << std::endl;
    num += 2;
    if (num > n)
    {
        num = n;
    }

    std::cout << "+1 is " << num;
}