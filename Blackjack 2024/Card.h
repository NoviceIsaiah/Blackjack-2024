/* 
 * File:   Card.h
 * Author: Isaiah
 *
 * Card class declaration h file. 
 */

#ifndef CARD_H
#define CARD_H

//Card class declaration starts here
class Card 
{
public:
    //Constructors
    Card(); //Default constructor 
    Card(unsigned int);
    
    //Variables
    int value,
    cardId,
    cardNum;
    char suit,
    face;
    
    //Functions
    int getValue();
    char getFace();
    char getSuit();
    int getId();
    void getCard();
    void getCard(Card);
private:
    //Functions
    void setValue();
    void setFace();
    void setSuit();
};

#endif /* CARD_H */