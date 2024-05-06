/* 
 * File:   Player.h
 * Author: Isaiah
 *
 * Player class declaration h file. Derived from Blackjack class in order to 
 * draw cards cards from the game deck. 
 */

#ifndef PLAYER_H
#define PLAYER_H

#include<list>
#include "Card.h"

class Player
{
public:
    //Constructor
    Player();
    
    //Class Variables
    char playerInp;
    unsigned int playerBank, 
                 playerBet,
                 playerCardValue;
    std::list<Card> PlayerHand;
    
    //Class function
    void getCard(Card);
    void showlist(std::list<Card>);
};

#endif /* PLAYER_H */