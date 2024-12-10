// Must be build with c++14
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Card.h"
#include "Hand.h"
#include "Deck.h"

using namespace std;

void Instructions() {
    cout << "\tGoal: Reach 21 without going over\n\n";
    cout << "\tThe House (computer player) will be playing against you\n\n";
    cout << "\tIf the House busts (goes over), you win.\n\n";
    cout << "\tIf the House doesn't bust, you win, if your\n";
    cout << "\ttotal value is greater than the House's\n\n";
    cout << "\tIf the player gets 21 and the House doesn't\n";
    cout << "\tthe player is a winner\n\n";
    cout << "\tIf a player and the House both get 21\n";
    cout << "\tit is declared a push (tie)\n\n";
    cout << "\tc = clubs, d = diamonds, h = hearts, s = spades\n\n";
}

string game() {
    Deck gameDeck;
    
    char opt;

    Hand player;
    Hand house;
    Card c;
    
    Card houseCard2; // A second card the house holds until the end
    
    // You will need to add a main loop wrapping a single game, allow the player
    // to keep playing, and keeping track of the score
    // You must create a new object class "Game".  The game object will keep track of the number of wins,  losses, and pushes
    // and will report the score when asked.

    //set up the game deck
    gameDeck.Populate();
    gameDeck.Shuffle();
    //cout << gameDeck.GetCardList();

    // Give house the first two cards
    // first card gets shown, second hid until end.
    c = gameDeck.Deal();
    house.Add(c);
    // Get a second house card to play after the player finishes (but don't show))
    houseCard2 = gameDeck.Deal();
    house.Add(houseCard2);
    cout << "The Dealer deals two cards to the house and reveals one: " << c.CardName() << endl;

    // Give the player's their first card
    c = gameDeck.Deal();
    player.Add(c);
    c = gameDeck.Deal();
    player.Add(c);
    cout << "The Dealer deals you two cards: " << player.GetCardList() << endl;

    // loop giving deal a card until player stands or goes bust
    do {
        // show game state:
        // show player cards
        // show player tally
        // ...
        cout << "Stand, or hit you with another card? (S or H)";
        cin >> opt;
        opt = tolower(opt);
        // Give the player another card as long as they want one
        if (opt == 'h') {
            c = gameDeck.Deal();
            player.Add(c);
        }
        // You should put a house stategy here,  usually the house draws on < 17
        // .....
        // loop until the player stands, goes bust, or wins
    } while (opt != 's' && !player.isBusted() &&  !house.isBusted() && !player.Wins() && !house.Wins());

    string status="";
    if (player.Wins()) {
      cout << "You win!" << endl;
      status="win";
    } 
    // Check for other wins
    // Show winners and losers
    return status;
}

int main() {
  cout << "\t\tWelcome to Blackjack! Have fun playing!\n\n";
  int win=0, lose=0, draw=0;
  Instructions();
  char c;
  do {
    string status = game();
    // Count and show win, lose, and draws
    // ...
    cout << ("Hit [Q]uit or [C]ontinue:");
    cin >> c;
  } while (c=='C' || c=='c');
}