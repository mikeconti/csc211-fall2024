// Implementation of Deck class
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include "Card.h"
#include "Deck.h"

// Private functions needed for shuffling
void seedRandom() {
    srand(time(NULL));
}
// Random number between 0 and 51
int nextRandom() {
    int random = rand()%52;
    return random;
}

Deck::Deck() {
    seedRandom(); //seed the random number generator
    Populate();
}

void Deck::Populate() {
    Cards.clear(); // clear out the deck before you create a new one

    //create deck by getting a copy of each card in the pool and placing it in the deck
    for (int s = 0; s < 4; ++s) {
        for (int r = 0; r < 13; ++r) {
            Cards.push_back(Card(r,s));
        }
    }
}

void Deck::Shuffle() {
  for (int i; i<52 ; i++) {
    Card temp;
    temp=Cards[i];
    int r = nextRandom();
    Cards[i]=Cards[r];
    Cards[r]=temp;
  }
}

Card Deck::Deal() {
    // Pulls the top card out of the deck
    // and gives it to the caller
    // Before dealing, check if the deck is empty, if so repopulate and shuffle, then draw.
    Card aCard;
    if (!Cards.empty()) {
        aCard = Cards.back();
        Cards.pop_back();
    } else {
        cout << "Out of cards, Unable to deal.\n";
    }
    return aCard;
}

string Deck::GetCardList() {
    string list = "";
    for (int i = 0; i < Cards.size(); i++) {
        list += Cards[i].CardName() + " ";
        cout << list << ":" << endl;
    }
    return list;

}



