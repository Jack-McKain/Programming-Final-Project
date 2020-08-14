#ifndef GamePiece_H
#define GamePiece_H
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;



class GamePiece {


public:
    string type;
    char sprite;
    int x;
    int y;
    GamePiece();
    GamePiece(string, char, int x, int y);

};



#endif // GamePiece_H
