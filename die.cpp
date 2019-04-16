/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/15/2019
** Description:  The die class is used for the regular die. n is the number of sides for the die
*******************************************************************************/

#include "die.h"
#include <cstdlib>
#include <ctime>

//DEFAULT CONSTRUCTOR
Die::Die()
{
	n = 0;
	srand(time(NULL));
}

//Constructor sets the number of sides and seeds the random int
Die::Die(int num)
{
	this->n = num;
	srand(time(NULL));
}

//Description: Returns a random int according to the number of sides the user enters
int Die::randInt()
{

	rolledValue = std::rand() % n + 1;

	return rolledValue;
}
