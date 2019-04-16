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

int LoadedDie::randIntHigher()
{

    int num;
    int n = 6;

    num = std::rand() % 6 + 1;

    num += 1;
    if (num > n)
    {
        num = n;
    }

    return num;
}