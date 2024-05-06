/* 
 * File:   Deck.cpp
 * Author: Isaiah
 * 
 * Deck class implementation cpp file
 */

#include "Deck.h"
#include <ctime>
#include <iostream>

//Default constructor. Creates a single deck of cards
Deck::Deck() 
{
    static int deckCount;
    deckCount++;
    
    deckNum = deckCount;
    numOfCards =  52;
    
    cards = new Card[numOfCards];
    
    for(int i=0; i < numOfCards; i++)
    {
        cards[i] = Card(i);
        cards[i].cardId = cards[i].cardNum + (52*(deckCount-1)) + 1; //Sets cardId based on which deck the card is in
    }
}
//Deck deconstructor: Frees up memories
Deck::~Deck()
{
    delete[] cards;
}

//Shuffle function
void Deck::shuffle()
{
    srand(time(0));
    for(int i=0;i<numOfShuf;i++)
    {
        for(int j=0;j<numOfCards;j++)
        {
            int rn = rand()%numOfCards; //Random number
            Card copy = cards[j];
            cards[j] = cards[rn];
            cards[rn] = copy;
        }
    }
}

//Print deck function
void Deck::printDeck()
{
    std::cout << "Printing deck: " << deckNum << std::endl;
    for(int i = 0; i < numOfCards; i++)
    {
        cards[i].getCard(cards[i]);
        std::cout << std::endl;
    }
}