#include "Game.h"
#include <iostream>
#include <cmath>
#include "Board.h"




using namespace std;

Game::Game(){

}


Game::Game(int width, int height){
this->width = width;
this->height = height;


}


//This function takes in the command from the user and send that input to the correct function in the board file.
void Game::start(){

    string input;
    int TurnCount = 0;
    int diff;

//This release elon is random and once activated will start to move elon
    srand(static_cast<unsigned int>(time(0)));
    int releaseElon = (rand()%6) + 3;
    //cout << "Elon relased at " << releaseElon << endl;


    intro();
    cout << "\n1 - Insane\n2 - Hard\n3 - Intermediate\n4 - Easy Mode\n5 - Baby\nPlease select difficulty level: ";
    cin >> diff;
    board.setup();
    while (true){
        
        board.checkRoadster();
        board.hideBoard();
        board.revealPlayer();
        board.print();

        if(board.checkRoadster() == true){
            cout << "\n\nYOU WON!\n\n" << endl;
            cout << "Total Number of Moves" << TurnCount << endl;
            break;
        }


        cout << "Use W, A, S, D then press enter to move\nPress 1 to Quit\nCurrent Move: ";
        cin >> input;
        cout << endl;
        //This outputs every turn, can be used as an end game stat.
        TurnCount += 1;
        //cout << "Turn #" << TurnCount << endl;


        if (input == "W"){
            this->board.moveUp();

        } else if (input == "A"){
              this->board.moveLeft();

        }else if (input == "S"){
              this->board.moveDown();

        }else if (input == "D"){
              this->board.moveRight();

        }else if (input == "w"){
              this->board.moveUp();

        }else if (input == "a"){
              this->board.moveLeft();

        }else if (input == "s"){
            this->board.moveDown();

        }else if (input == "d"){
             this->board.moveRight();

        }else if (input == "1"){
           break;
        }
        else{
            cout << "\nInvalid Input\n";
            continue;
        }

        if(TurnCount == releaseElon)
            cout << "He's awake\n";
        
        if(TurnCount > releaseElon){
        //This modulo function is what makes Elon move everyother turn, the larger the number the easier the game is.
                    if(TurnCount % diff == 0){
        //This will move elon and check to see if you have won or lost
                        if(this->board.moveElon() == false){
                            board.print();
                            break;
                        }
                    }
                }
/*
    ////Relase elon function after player move so he cant see into the future.
                if(TurnCount > releaseElon)
                    if(TurnCount % 3 != 0){
                        //cout << (TurnCount % 1) << endl;
                        this->board.moveElon();
                    }
                if(this->board.moveElon() == false)
                    break;
        */
        }


    //cout << "Total Number of Moves: " << TurnCount << endl;
    cout << "Game Over would you like to play again? (Y/N):\n";

        char Playagain;
        cin >> Playagain;
        //if(Playagain == 'Y')
//    //Something here needs to make the game replayable.

    }





        void Game::intro(){
            cout << "Welcome to The Starman\nYou have broken into Elons facility and are trying to steal his Telsa Roadster.\nBut be careful as Elon is sleeping in the facility, if you wake him he will try to catch you and make you his Starman.\nThere is also a Yugo and a Pinto in the facility. Make sure you steal the correct vehicle.\nGood Luck!\n\nKey:\nX = Player\nE = Elon\nR = Roadster\nY = Yugo\nP = Pinto\n";
            //print legend
            //print instructions
        }
