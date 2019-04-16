/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/015/2019
** Description:  The header file for the loadedDie class
*******************************************************************************/

#ifndef LOADEDDIE_HPP
#define LOADEDDIE_HPP
#include "die.h"
#include <cstdlib>
#include <ctime>

class LoadedDie
{
  public:
    LoadedDie();

    int randIntHigher();
};

#endif