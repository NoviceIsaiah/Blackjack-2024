/* 
 * File:   Blackjack.h
 * Author: Isaiah
 *
 * Blackjack class declaration h file
 */

#ifndef BLACKJACK_H
#define BLACKJACK_H

#include "Card.h"
#include "Deck.h"
#include "Player.h"

#include <list>
#include <queue>

class Blackjack
{
public:
    //Constructor
    Blackjack();
    
    //Class Functions
    void showDeck();
    void runGame();
    void playRound();
    void dealCard(std::list<Card>);
    
    //Class variables
    Player player;
    unsigned int totalCards;
    std::queue<Card> GameDeck;
};

#endif /* BLACKJACK_H */