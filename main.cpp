/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/015/2019
** Description:  The main file for the warGame
*******************************************************************************/

#include "die.h"
#include "loadedDie.h"
#include <iostream>

int main()
{

	Die d(6);
	LoadedDie m;

	int test = d.randInt();

	std::cout << "From the die: " << test << std::endl;

	m.randIntHigher();

	return 0;
}
