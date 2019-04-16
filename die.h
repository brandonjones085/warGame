/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/015/2019
** Description:  The header file for the die class. This is used to create the regular die. n is the number of sides the user enters. 
*******************************************************************************/
#ifndef DIE_HPP
#define DIE_HPP

class Die
{
  protected:
	int n;

  private:
	int rolledValue;

  public:
	Die();
	Die(int);
	int randInt();
};

#endif
