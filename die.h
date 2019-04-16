/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/015/2019
** Description:  The header file for the die class
*******************************************************************************/
#ifndef DIE_HPP
#define DIE_HPP

class Die
{
  protected:
	int n;
	//int randInt;

  private:
  public:
	Die();
	Die(int);
	int randInt();
	int getN();
};

#endif
