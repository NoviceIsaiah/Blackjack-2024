/* 
 * File:   main.cpp
 * Author: Isaiah
 *
 * Game of Blackjack. Play against the dealer and try to hit or come as close as
 * possible to 21. If you are closer than than dealer to hitting 21 you win! But
 * be careful since if you go over 21 you automatically bust/lose your bet so 
 * don't get greedy! Card values range from 2-10 for face values and Jack, 
 * Queen, and King are also worth 10. Aces can be either 11 or 1 so you can 
 * choose unless choosing 11 will make you bust. 
 * 
 * To play, pay attention to the dealer's cards as well as yours. You and the
 * dealer get 2 cards to start but you only see the dealers first card. You can 
 * choose to hit or stand based on your cards value but remember you want to try 
 * and get as close to 21 as possible without going over it. Once you are ready
 * to stand, the dealer will have to draw cards until they reach a face value of
 * 17 or more.
 * 
 */

#include <iostream>
#include <cstdlib>

using namespace std;

#include "Blackjack.h"

int main(int argc, char** argv) 
{
    Blackjack newGame;
    newGame.runGame();
    //newGame.showDeck();
    return 0;
}