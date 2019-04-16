/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/015/2019
** Description:  The loadedDie class
*******************************************************************************/
#include "die.h"
#include "loadedDie.h"
#include <iostream>

LoadedDie::LoadedDie()
{
    n = 0;
}

LoadedDie::LoadedDie(int num)
{
    this->n = num;
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