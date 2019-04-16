/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/015/2019
** Description:  The loadedDie class
*******************************************************************************/
#ifndef GAME_HPP
#define GAME_HPP

class Game
{
  private:
    int gameChoice;
    int rounds;
    int type;
    int numberOfSidesPlayer1;
    int numberOfSidesPlayer2;

  public:
    // Game();
    int menu();
    void setRounds();
    int getRounds();
    void setType();
    int getType();
    void setNumberOfSidesPlayer1();
    int getNumberOfSidesPlayer1();
    void setNumberOfSidesPlayer2();
    int getNumberOfSidesPlayer2();
};

#endif
