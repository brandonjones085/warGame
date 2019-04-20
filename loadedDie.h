/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/15/2019
** Description:  The header file for the loadedDie class
*******************************************************************************/

#ifndef LOADEDDIE_HPP
#define LOADEDDIE_HPP
#include "die.h"
#include <cstdlib>
#include <ctime>

class LoadedDie : public Die
{
  private:
    int sides;
    int rolledValue;

  public:
    LoadedDie();
    LoadedDie(int);
    int randIntHigher();
};

#endif