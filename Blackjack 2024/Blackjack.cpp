/* 
 * File:   Blackjack.cpp
 * Author: Isaiah
 * 
 * Blackjack class implementation cpp file.
 */

#include "Blackjack.h"
#include <queue>
#include <iostream>

//Constructor implementation: Creates two decks and shuffles them for a single
//deck of cards to choose from. 
Blackjack::Blackjack()
{
    Deck deck1, deck2;
    
    deck1.shuffle();
    deck2.shuffle();
    
    totalCards = 0;
    
    for(int i = 0; i < deck1.numOfCards; i++){
        GameDeck.push(deck1.cards[i]);
        totalCards++;
    }
    
    for(int i = 0; i < deck2.numOfCards; i++){
        GameDeck.push(deck2.cards[i]);
        totalCards++;
    }
}

//Run game function: Creates an instance of the game to run until player opts 
//out or player runs out of money. Starting bank is 1000. Max is 4,294,967,295
void Blackjack::runGame()
{
    std::cout << "Loading game...." << std::endl;
        
    std::cout << "Starting Blackjack! Get as close to 21 to win. You can end"
              << " the game after each hand. Game auto ends when your bank"
              << " hit 0." << std::endl;
    
    do{
        std::cout << "Bet money or press 'N' to end game..." << std::endl;
        
        if(std::cin >> player.playerBet)
        {
            if (player.playerBet > player.playerBank)
            {
                do
                {
                    std::cout << "Enter a bet lower than your total: ";
                    std::cin >> player.playerBet;
                }while (player.playerBet > player.playerBank);
            }
            playRound();
        }
        else 
        {
            do
            {
                std::cin >> player.playerInp;
                player.playerInp = tolower(player.playerInp);
            }while(player.playerInp != 'n');
        }
    }while (player.playerBank > 0 || player.playerInp != 'n');
}

//Play round function. Draws cards for player and dealer. Whoever hits closest
//to 21 without busting wins.
void Blackjack::playRound()
{
    std::cout << "Current bet: " << player.playerBet << std::endl;
    
    dealCard(player.PlayerHand);
    dealCard(player.PlayerHand);
    
    player.showlist(player.PlayerHand);
}

//Deals cards to player and/or dealer
void Blackjack::dealCard(std::list<Card> hand)
{
    hand.push_back(GameDeck.front());
    GameDeck.pop();
}

//Show game deck function
void Blackjack::showDeck()
{
    std::queue<Card> Copy = GameDeck;
    while(!Copy.empty())
    {
         std::cout << Copy.front().cardId << std::endl;
         Copy.pop();
    }
}