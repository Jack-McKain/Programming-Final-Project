#ifndef TILE_H
#define TILE_H

#include "GamePiece.h"




class Tile {
public:
    int x;
    int y;
    GamePiece gamePiece;
    bool isVisible();
    bool isOccupied();
    Tile();
    Tile(int x, int y);
    void Hide();
    void Reveal();

private:
    bool isHidden;

};



#endif // TILE_H
