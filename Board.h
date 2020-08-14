#ifndef BOARD_H
#define BOARD_H
#include <stdio.h>

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <array>
#include <vector>
#include "Tile.h"
#include "GamePiece.h"

using namespace std;

const int boardWidth = 15;
const int boardHeight = 15;


class Board{
public:
    Board();
    Board(int width, int height);
    void print();
    void setup();
    bool swap(int startX, int startY, int endX, int endY);
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
    bool moveElon();
    void revealPlayer();
    void hideBoard();
    double magnitude(int x, int y);
    bool checkRoadster();
    double distance();




private:
    int height;
    int width;
    int pieces;
    double lastDistance;
    GamePiece player;
    GamePiece roadster;
    Tile tile[boardWidth][boardHeight];
};



#endif // BOARD_H


