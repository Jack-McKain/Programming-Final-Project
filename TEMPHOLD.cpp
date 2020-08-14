
//#include "Board.h"
//#include "Game.h"
//#include "Tile.h"
//#include <vector>

//using namespace std;

//Board::Board(){

//  height = 15;
//  width = 15;
//  lastDistance = -1;
//// width and height may be subtracted by 2 at places to keep player closer to center of board
//// done to increase player options during a game.

//}

////Prints out the board after every round so you can see what has been updated.
//void Board::print(){
//    cout << endl;
//    for(int x = 0; x < width ; x++){
//        for(int y = 0; y < height; y++){
//         if  (this-> tile[x][y].isVisible() || true){
//               if(tile[x][y].isOccupied()){
//                    cout << ' ' << this->tile[x][y].gamePiece.sprite;
//                }
//                else{
//                     cout << ' ' << ' ';
//                }

//            } else {
//                cout << ' ' << '-';
//            }
//        }
//        cout << endl;
//    }

//    cout << endl;
//}

////our move functions do what they say, each input will trigger a sligtly different action and move the player
//void Board::moveUp(){ //to move elon? (string type){

////    if type == player {

////    }
//    int pY = this->player.y;
//    int pX = this->player.x;
//    this->swap(pX, pY, pX-1, pY);
//    this->player.x = pX-1;
//}

//void Board::moveLeft(){
//    int pY = this->player.y;
//    int pX = this->player.x;
//    this->swap(pX,pY, pX, pY-1);
//    this->player.y = pY-1;
//}

//void Board::moveRight(){
//    int pY = this->player.y;
//    int pX = this->player.x;
//    this->swap(pX, pY, pX, pY+1);
//    this->player.y = pY+1;
//}

//void Board::moveDown(){
//    int pY = this->player.y;
//    int pX = this->player.x;
//    this->swap(pX, pY, pX+1, pY);
//    this->player.x = pX+1;
//}


////This will switch the player and blank space so the character doesnt leave a trail, we will need to work on this so when it detects another sprite it wont switch them.

//void Board::swap(int startX, int startY, int endX, int endY){

//    if(endX > width || endX < 0 ||
//       endY > height || endY < 0 ||
//       startY > height || startY < 0 ||
//       startX > width || startX < 0 ){
//        cout << "invalid input";
//        //return;
//    }

//    if(tile[endX][endY].isOccupied()){
//        //cout << "test\n";
//        //These if statements look for each sprite and give a costum prompt when interacted with.
//        if(tile[endX][endY].gamePiece.sprite == 'R'){
//            cout << "Winner Winner Chicken Dinner\n";
//            Tile TempgamePiece = tile[endX][endY];
//            tile[endX][endY] = tile[startX][startY];
//            tile[startX][startY] = TempgamePiece;
//            //return false;
//        }

//        else if(tile[endX][endY].gamePiece.sprite == 'Y'){
//            cout << "Russian no where in that thing\n";
//            Tile TempgamePiece = tile[endX][endY];
//            tile[endX][endY] = tile[startX][startY];
//            tile[startX][startY] = TempgamePiece;
//        }
//        else if(tile[endX][endY].gamePiece.sprite == 'P'){
//            cout << "Don't get rear-ended\n";
//            Tile TempgamePiece = tile[endX][endY];
//            tile[endX][endY] = tile[startX][startY];
//            tile[startX][startY] = TempgamePiece;
//        }
//        else if(tile[endX][endY].gamePiece.sprite == 'E'){
//            cout << "You are now The Starman\n";
//            Tile TempgamePiece = tile[endX][endY];
//            tile[endX][endY] = tile[startX][startY];
//            tile[startX][startY] = TempgamePiece;
//        }
//        else{
//            cout << "Swap failed\n";
//            Tile TempgamePiece = tile[endX][endY];
//            tile[endX][endY] = tile[startX][startY];
//            tile[startX][startY] = TempgamePiece;
//        }
//        //cout << ' ' << this->tile[endX][endY].gamePiece.sprite;
//        //Tile TempgamePiece = tile[endX][endY];
//        //tile[endX][endY] = tile[startX][startY];
//        //tile[startX][startY] = TempgamePiece;

//    }
//    else{
//        Tile TempgamePiece = tile[endX][endY];
//        tile[endX][endY] = tile[startX][startY];
//        tile[startX][startY] = TempgamePiece;
//    }

//    //return true;
//}

////------------------------------------------------------------------------------------------------------------
//bool Board::moveElon(){

//    int EX = 0;
//    int EY = 0;
//    int PX = 0;
//    int PY = 0;
//    int RX = 0;
//    int RY = 0;


//    //cout << "this is a test of the move elon function\n";

////This finds the location of Elon after everyturn. Also outputs one too many cordinates but its functional unlike the player one.
//    for(int ElonX = 0; ElonX < width ; ++ElonX){
//        //cout << "test1\n";
//        for(int ElonY = 0; ElonY < height; ++ElonY){
//            //cout << "test2\n";
//            if(tile[ElonX][ElonY].gamePiece.type == "E"){
//                EX = ElonX;
//                EY = ElonY;

//            }
//        }
//    }

//    //This finds the location of the Roadster and if the player is near the game will end
//        for(int RoadX = 0; RoadX < 15 ; ++RoadX){
//            for(int RoadY = 0; RoadY < 15; ++RoadY){
//                if(tile[RoadX][RoadY].gamePiece.type == "R"){
//                    RX = RoadX;
//                    RY = RoadY;
//                }

//            }
//        }


//     //  int releaseElon


//  Board::swap(EY)


//               (rand()%4);


//       void Board::moveElon(){
//           int g;

//           g = (rand()%4);

//      switch(g){

//      case 1: // code to be executed if n = 1;
//          bool moveCheck (int g)
//          {


//          }){

//            }



//              return true;
//            } else {
//              return false;
//            }
//          }
//      }
//      case 2:
//      case 3:
//      case 4:
//      default:

//           }



// a







////This function compares the location of Elon and the player to determine where elon will move.
////HE CAN GO OFF THE BOARD AND BREAK THE GAME
////He can also swap places with other pieces
////He now will interact with the objects and attempt to move around them. Its not perfect but for most situations it will work.
////I have the game output what he is "Thinking" to help with debugging i will remove all this for the final game.

//            if(PX < EX){
//                //cout << "Move Elon Up\n";
//                if(tile[EX-1][EY].gamePiece.type == "P" || tile[EX-1][EY].gamePiece.type == "Y" || tile[EX-1][EY].gamePiece.type == "R"){
//                    cout << "Illegal elon move\n";
//                    Tile TempgamePiece = tile[EX][EY+1];
//                    tile[EX][EY+1] = tile[EX][EY];
//                    tile[EX][EY] = TempgamePiece;
//                }
//                else{
//                    Tile TempgamePiece = tile[EX-1][EY];
//                    tile[EX-1][EY] = tile[EX][EY];
//                    tile[EX][EY] = TempgamePiece;
//                }
//            }

//            if(PX > EX){
//               // cout << "Move Elon Down\n";
//                if(tile[EX+1][EY].gamePiece.type == "P" || tile[EX+1][EY].gamePiece.type == "Y" || tile[EX+1][EY].gamePiece.type == "R"){
//                    cout << "Illegal elon move\n";
//                    Tile TempgamePiece = tile[EX][EY+1];
//                    tile[EX][EY+1] = tile[EX][EY];
//                    tile[EX][EY] = TempgamePiece;
//                }
//                else{
//                    Tile TempgamePiece = tile[EX+1][EY];
//                    tile[EX+1][EY] = tile[EX][EY];
//                    tile[EX][EY] = TempgamePiece;
//                }
//            }

//            if(PX == EX){
//                if(PY < EY){
//                    //cout << "Move Elon Left\n";
//                    if(tile[EX][EY-1].gamePiece.type == "P" || tile[EX][EY-1].gamePiece.type == "Y" || tile[EX][EY-1].gamePiece.type == "R"){
//                        cout << "Illegal elon move\n";
//                        Tile TempgamePiece = tile[EX-1][EY];
//                        tile[EX-1][EY] = tile[EX][EY];
//                        tile[EX][EY] = TempgamePiece;
//                    }
//                    else{
//                        Tile TempgamePiece = tile[EX][EY-1];
//                        tile[EX][EY-1] = tile[EX][EY];
//                        tile[EX][EY] = TempgamePiece;
//                    }
//                }

//                if(PY > EY){
//                    //cout << "Move Elon Right\n";
//                    if(tile[EX][EY+1].gamePiece.type == "P" || tile[EX][EY+1].gamePiece.type == "Y" || tile[EX][EY+1].gamePiece.type == "R"){
//                        cout << "Illegal elon move\n";
//                        Tile TempgamePiece = tile[EX-1][EY];
//                        tile[EX-1][EY] = tile[EX][EY];
//                        tile[EX][EY] = TempgamePiece;
//                    }
//                    else{
//                        Tile TempgamePiece = tile[EX][EY+1];
//                        tile[EX][EY+1] = tile[EX][EY];
//                        tile[EX][EY] = TempgamePiece;
//                    }
//                }
//            }

//    //cout << "X distance apart: " << abs(PX - EX) << " Y distance apart: " << abs(PY - EY) << endl;
//    if(PX == EX  && PY == EY){//abs(PX - EX) <=1 && abs(PY - EY) <= 1){
//        cout << "You are now The Starman\n";
//        return false;
//    }


//    else
//        return true;

//}



//int PY;
//int PX;
//char Pieces[3] = {'Y','P','E'};

//void Board::setup(){

////This For loop inputs all the Cars and Elon into the game in random locations.
//    srand(static_cast<unsigned int>(time(0)));
//    for(int z = 0; z < 3; ++z){
//        //TRY TO USE PIECES.SIZE() TO AVOID USE OF MAGIC NUMBER
//        int PX = (rand()%width-2);
//        int PY = (rand()%height-1);

//       while(tile[PX][PY].isOccupied()){
//              PX = (rand()%width-2);
//              PY = (rand()%height-2);
//       }

//        tile[PX][PY].gamePiece.type = Pieces[z];
//        tile[PX][PY].gamePiece.sprite = Pieces[z];
//        tile[PX][PY].gamePiece.x = PX;
//        tile[PX][PY].gamePiece.y = PY;
////        this->player = tile[PX][PY].gamePiece;
////        this->roadster = tile[RX][RY].gamePiece;
//    }


////This funciton insterts the player into the game we do this last so the move function takes the last sprite and makes them the playable sprite.
//    //For roadster
//    int randX = (rand()%width);
//    int randY = (rand()%height);
//    while(tile[randX][randY].isOccupied()){
//           randX = (rand()%width-2);
//           randY = (rand()%height-2);
//    }
//    tile[randX][randY].gamePiece.type = "Roadster";
//    tile[randX][randY].gamePiece.sprite = 'R';
//    tile[randX][randY].gamePiece.x = randX;
//    tile[randX][randY].gamePiece.y = randY;
//    this->roadster = tile[randX][randY].gamePiece;



//    ///LOOK AT ME







//    //For player
//    int ranX = (rand()%width);
//    int ranY = (rand()%height);
//    while(tile[ranX][ranY].isOccupied()){
//           ranX = (rand()%width-2);
//           ranY = (rand()%height-2);
//    }
//    tile[ranX][ranY].gamePiece.type = "Player";
//    tile[ranX][ranY].gamePiece.sprite = 'X';
//    tile[ranX][ranY].gamePiece.x = ranX;
//    tile[ranX][ranY].gamePiece.y = ranY;
//    this->player = tile[ranX][ranY].gamePiece;


//}

//void Board::hideBoard(){
//    for(int x = 0; x < width ; x++){
//        for(int y = 0; y < height; y++){
//             tile[x][y].Hide();
//        }
//    }
//}

//double Board::distance(){



//    return magnitude(player.x - roadster.x, player.y - roadster.y);


//}

//double Board::magnitude(int x, int y){
//    double d;
//    x = pow(x, 2.0);
//    y = pow(y, 2.0);
//    d = sqrt(x+y);
//    return d;
//}


//bool Board::checkRoadster(){
//    double d = distance();
//    cout << "\nThe magnitude is " << d;
//    cout << "\nthe last distance is " << lastDistance;

//        if(d - lastDistance < 0){
//            cout << "\nYou are getting warmer" << endl;

//        }
//        else if(d - lastDistance == 0){
//            cout << "\nI feel no change" << endl;

//        }
//        else if(d - lastDistance > 0){
//            cout << "\nYou are getting colder" << endl;
//        }


//    lastDistance = d;
//    return d == 0;
//}






//void Board::revealPlayer(){
//    this->tile[player.x][player.y];
//    // 8 if statesment, if this is a lcoation, set it to visible.  (Index into tile array.)

//    if(player.x-1 >= 0 && player.y-1 >= 0 && player.y+1 < height && player.x + 1 < width){
//        this->tile[player.x][player.y].Reveal();
//    }
//    if(player.x-1 >= 0 && player.y-1 >= 0){
//        this->tile[player.x-1][player.y-1].Reveal();

//    } if(player.x-1 >= 0){
//        this->tile[player.x-1][player.y].Reveal();

//    } if(player.x-1 >= 0 && player.y+1 < height){
//        this->tile[player.x-1][player.y+1].Reveal();

//    } if(player.y-1 >= 0){
//        this->tile[player.x][player.y-1].Reveal();

//    } if(player.y+1 < height){
//        this->tile[player.x][player.y+1].Reveal();

//    } if(player.x + 1 < width && player.y-1 >= 0){
//        this->tile[player.x+1][player.y-1].Reveal();

//    } if(player.x + 1 < width){
//        this->tile[player.x+1][player.y].Reveal();

//    } if(player.x+ 1 < width && player.y + 1 < height){
//        this->tile[player.x+1][player.y+1].Reveal();

//}

//}

////for(int x = 0; x < width ; x++){
////    for(int y = 0; y < height; y++){
////     if  (this-> tile[x][y].isVisible()){
////            if(tile[x][y].isOccupied()){
////                cout << ' ' << this->tile[x][y].gamePiece.sprite;
////            }
////            else{
////                 cout << ' ' << ' ';
////            }

////        } else {
////            cout << ' ' << '-';









////    for(int z = 0; z < 5; ++z){
////        srand(static_cast<unsigned int>(time(0)));
////        width = (rand()%width);
////        height = (rand()%height);
////        //cout << Pieces[z] << " is located at: " << x << "-" << y << endl;

////        while(tile[width][height].isOccupied() != false){
////            //clairty
////            //  [x][y] != '-'){
////            width = (rand()%width);
////            height = (rand()%height);
////            //cout << Pieces[z] << " is located at: " << x << "-" << y << endl;
////        }

////        cout << tile[width][height] << " is located at: " << width << "-" << height << endl;
////        tile[width][height] = Tile();
////        if (tile[width][height].gamePiece.type == "Player"){



////      //      playerLocation.playerx = x;
////     //       playerLocation.playery = y;
////        }
////    }
//////     Board[14][14];






/////__________________________________________




////void Game::printBoard(char Board[][15]){

////    cout << endl;
////    for(int x = 0; x <= 14; x++){
////        for(int y = 0; y <= 14; y++){
////            cout << Board[x][y];
////        }
////        cout << endl;
////    }
////    cout << endl;
////}

//// Consider replacement.  Define the gamepiece object.
////GamePiece Pieces[5] = {
////    GamePiece("player",'X', Position(0,0)),
////    GamePiece("Roadster",'R', Position(0,0)),
////    GamePiece("Pinto",'P', Position(0,0)),
////    GamePiece("Yugo",'Y', Position(0,0)),
////    GamePiece("THE Elon Musk.",'E', Position(0,0)),
////};


