#ifndef GAME_H
#define GAME_H
#include "Board.h"




class Game{
public:
    Game();
    int width;
    int height;
    Game(int width, int height);
    void start();
    void intro();



private:
    Board board;





};



#endif // GAME_H
