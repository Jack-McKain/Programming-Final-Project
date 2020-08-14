/*
    main.cpp
    Tesla Final Project
    
    Created by Jack McKain on 4/22/2020
    Copyright © 2020 Jack McKain. All rights reserved.



* Project Title:
* - The Starman
* Description: In this game you are snooping around Elons facility trying to steal his prized possesion: his Roadster. Now you must steal the car while avoiding Elon and other cars. If Elon catches you, he will send up to space in the roadster as the Starman.
*
* Developers:
* - John Mckain - McKainjr@mail.uc.edu
* - Tyler Rivard - Rivardtr@mail.uc.edu
*
* Help Received:
* - Joni Torsella - Helped us with the fog implimentation
* - BawbMaggit - Helped us with the swap function
*
* Developer comments: // Not optional
 Jack: 4/22/2020
 I started by creating the 3 files needed and getting the board to print. From there i have made a function that can print all the neccessary pieces needed for the game in random locations. Im currently trying to figure out what i need to do to get my player to move, unlike Tic Tac Toe we need to have one key press input and then cover over the pervious location.
 I found this great response to a question on how to move pieces on a matrix link on next line
 https://stackoverflow.com/questions/42546428/how-to-make-a-character-move-in-c
 With this site i will also start to add structs and classes as the inscructions mandate it.
 
 Tyler: 4/23/2020
 I did a major overhaul and split each function into its own file. was able to find a more efficent way to print the board and was able to get the player to move around the board. I still need to add the other sprits into the game.
 
 Jack 4/24/2020
 I was able to get the other sprits added into the game and after a few tirals only have the player move. We will need to find a way to not switch with other sprits and accually interact but for now i think what we have is great.
 
 Jack 4/25/2020
 I have gotten all the sprites to give promts off when the player swaps places with them. I still need to figure out how to end the game once the Roadster is found. I also fixed the problem where if teh player went all the way to the right they would pop up ont the other side of the map.
 I have a MoveElon functio in the Board.cpp file and added the move function in with the Game.cpp file. The code will run and Elon will move but his movement isnt quite right. I added a find function to locate the player and Elon and compare there locations but for some reason the player location will not output a single cordinate so where Elon moves is skewed becasue of it. If you can find out why there are multiple outputs then the Move Elon is good for now. HE WILL MOVE OFF THE BOARD AND BREAK THE GAME. But hopefully that can be fixed if he moves corretly to begin with.
 
 Jack 4/26/2020
 I have fixed the inaccurate tracking of elon and gotten it to function predicatably every time. Elon will now move out of the way of people but if he is at the top of right of the board he will still walk off.
 I have gotten the game to end once the roadster is interacted with or when Elon catches you. I still need to work on getting the game to restart once its all over but for now good progress.
*/


#include <iostream>
#include "Game.h"

int Height = 15;
int Width = 15;

int main() {

    Game game(Width, Height);
    game.start();

    return 0;
}
