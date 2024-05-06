/* 
 * File:   Player.cpp
 * Author: Isaiah
 * 
 * Player class implementation cpp file
 */

#include "Player.h"
#include <list>
#include <iostream>

Player::Player() 
{
    playerBank = 1000;
}

void Player::getCard(Card x)
{
    PlayerHand.push_back(x);
    
}
void Player::showlist(std::list<Card> cardList)
{
    std::list<Card> copy = cardList;
    while (!copy.empty())
    {
        std::cout << cardList.front().cardId;
    }
}
