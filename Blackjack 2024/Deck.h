/* 
 * File:   Deck.h
 * Author: Isaiah
 *
 * Deck class declaration h file.
 */

#ifndef DECK_H
#define DECK_H

#include "Card.h"

//Deck class declaration starts here
class Deck {
public:
    //Constructors
    Deck(); //Default constructor
    ~Deck(); //Default de-constructor
    
    //Functions
    void shuffle(); //Shuffle function
    void printDeck(); //Prints the entire deck (mainly for testing)
    
    //Variables
    Card *cards; //Pointer of cards. Acts as list of cards to represent a deck
    unsigned int numOfCards;
private:    
    //Variables
    unsigned int numOfShuf = 7,
            numDealt,
            deckNum;
    
    //Functions
    static int getDeckNum();  
};

#endif /* DECK_H */