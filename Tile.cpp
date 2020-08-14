#include "Tile.h"




Tile::Tile(){
    isHidden = true;
}


bool Tile::isOccupied(){


    return gamePiece.type != "";
}


void Tile::Hide(){
    isHidden = true;


}




void Tile::Reveal(){
    isHidden = false;

}

bool Tile::isVisible(){
    // How to return the opposite(!) of visible
    return !isHidden;
}
