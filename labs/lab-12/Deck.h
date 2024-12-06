// A class for a deck of playing card

using namespace std;

const int DECKSIZE = 52;

#ifndef DECK_H
#define DECK_H


class Deck {
public:
    Deck();

    //creates deck of 52 cards
    void Populate();

    //shuffles cards
    void Shuffle();

    //deals one card 
    Card Deal();

    // create a string list of all the cards in this deck.
    string GetCardList();

private:
    vector <Card> Cards;  // Used to store a list of current cards in Deck. 
};

#endif /* DECK_H */

