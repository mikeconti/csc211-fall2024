// A class for Playing Cards
using namespace std;
#include <vector>

class Card {
public:
    // Card Constructors
    Card();
    Card(int r, int s);

    // Get the short name of a card (1s, Kc)
    string CardName() ; 
    
    // Get the long name (Ace of Hearts, 3 of Diamonds)
    string CardNameLong() ; 

    // Return true is this is an ACE
    bool isAce() ;
    
    // Get the numeric value of the card 
    // (Will be the face value, though some cards may have multiple values based on need)
    int GetValue() ; // 1-13

private:
    vector<string> ranks = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    vector<int>  values = {11,2,3,4,5,6,7,8,9,10,10,10,10};
    vector<string> suits = {"Clubs", "Diamonds", "Hearts", "Spades"};

    int rank;
    int suit;
};


