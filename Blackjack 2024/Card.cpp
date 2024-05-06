/* 
 * File:   Card.cpp
 * Author: Isaiah
 * 
 * Card class implementation cpp file.
 */

#include "Card.h"
#include <iostream>

//Card constructor
Card::Card()
{
    cardNum = 0;
}
Card::Card(unsigned int x) //Constructor takes in value to set cardNum
{
    cardNum = x;
    
    setSuit();
    setFace();
    setValue();
}

//Set functions----------------------------------------------------------------
//Function to set card suit
void Card::setSuit()
{
    char SUITS[] = {'D','H','S','C'};
    int n = cardNum;
    suit = SUITS[n/13];
}

//Function to set card face
void Card::setFace()
{
    char FACES[] = {'A','2','3','4','5','6','7','8','9','X','J','Q','K'};
    int n = cardNum;
    face = FACES[n%13];
}

//Function to set card value
void Card::setValue()
{
    value = cardNum % 13;
    value++; 
    if(value > 10) value = 10; 
}

//Get functions----------------------------------------------------------------
//Function to return card suit
char Card::getSuit()
{
    return suit;
}

//Function to return card face
char Card::getFace()
{
    return face;
}

//Function to return card value
int Card::getValue()
{
    return value;
}

//Function to return card ID
int Card::getId()
{
    return cardId;
}

void Card::getCard()
{
    std::cout << face << " of " << suit; 
}

//Function to display card face and suit
void Card::getCard(Card x)
{
    std::cout << x.getFace() << " of " << x.getSuit() << " ";
}