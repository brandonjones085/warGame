/******************************************************************************* 
** Author:       Brandon Jones
** Date:         04/15/2019
** Description:  The header file for the game class. 
*******************************************************************************/
#ifndef GAME_HPP
#define GAME_HPP

class Game
{
  private:
    int gameChoice;
    int rounds;
    int player1Type;
    int numberOfSidesPlayer1;
    int player1Point = 0;
    int player1Roll = 0;
    int numberOfSidesPlayer2;
    int player2Point = 0;
    int player2Roll = 0;

  public:
    // Game();
    int menu();
    void setRounds();
    int getRounds();
    void setNumberOfSidesPlayer1();
    int getNumberOfSidesPlayer1();
    void setPlayer1Point(int);
    int getPlayer1Point();
    void setTypePlayer1();
    void setPlayer1Roll(int, int);
    int getPlayer1Roll();
    void setNumberOfSidesPlayer2();
    int getNumberOfSidesPlayer2();
    void setPlayer2Point(int);
    int getPlayer2Point();
    void setPlayer2Roll(int, int);
    int getPlayer2Roll();
    void validateNumOfSides(int);
    void validateInt(int);
    void validateRounds(int);
};

#endif
