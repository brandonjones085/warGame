/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/015/2019
** Description:  The loadedDie class
*******************************************************************************/
#include "die.h"
#include "loadedDie.h"
#include <iostream>

//DEFAULT CONSTRUCTOR
LoadedDie::LoadedDie()
{
    sides = 0;
    srand(time(NULL));
}

//Constructor: takes in an integer and sets the number of sides to that integer
LoadedDie::LoadedDie(int num)
{
    this->sides = num;
    srand(time(NULL));
}

//Returns a random integer between 1 and the number of sides. Then adds one to that value to make the average higher than the regular die.
int LoadedDie::randIntHigher()
{

    rolledValue = std::rand() % sides + 1;

    rolledValue += 1;
    if (rolledValue > sides)
    {
        rolledValue = sides;
    }

    return rolledValue;
}