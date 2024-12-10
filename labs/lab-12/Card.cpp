// Implementation of Card class
// This is done
#include <iostream>
#include <string>
#include <vector>
#include "Card.h"

//Constructor

Card::Card() {
    string rank = ranks[0]; // Ace
    string suit = suits[0]; // Clubs
}

Card::Card(int r, int s) {
    rank = r;
    suit = s;
}

string Card::CardName()  {
    return (ranks[rank] + " of " + suits[suit]);
}

bool Card::isAce()  {
  return rank==0;
}
int Card::GetValue()  {
    //value is number showing on card
    int value = values[rank];
    //value is 10 for face cards
    return value;
}

