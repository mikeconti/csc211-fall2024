# Lab 13: BlackJack

Welcome to CSC 211 Lab 13. The goal of this lab is to use classes and objects to create a program to play Blackjack (21) in C++. A start of the program has been provided to you. You must continue this program to complete the game.

1. IDEA Course Feedback<br>
2. Background<br>
3. What you must do <br>
4. Submission <br>

## 1. IDEA Course Feedback

Please visit [https://uri.campuslabs.com/eval-home/](https://uri.campuslabs.com/eval-home/) to complete the IDEAs. You have received an email with instructions requesting they complete course feedback. They will continue to receive email reminders throughout the feedback period.

## 2. Background

The code above includes the following classes:

* Card - This is a single card with a suit and a rank (which is a given card's "state"). The suit and rank are represented by the integers 0-3 for suits, and 0-12 for rank. 
The methods on a card are Card(...) (the constructors) and CardName(...) and CardValue(...) which return the value of the card.

* Hand - This is essentially an arbitrary group of playable cards. It contains zero or more Card objects (stored in a vector). The Hand class has the Hand() construct to create the (empty) hand, Add(...) to add a card to that hand, bool Wins() to tell you if the player wins by hitting 21, a GetCardList() to get a list of the card in the hand, and a GetTotal() to get the total value of the hand. Note that there are two hands - one for the house, and one for the player.

* Deck - This is similar to the hand in that it is a set of cards. It is different in that it had (hidden inside) a pool of 52 cards from which it creates a deck which gets played from. As you play from the deck it gets smaller, until it is empty. WHen it is empty you will need to reinitialize the Deck to 52 cards. The deck includes the Deck() constructor  and GetCardList() (like the hand's member functions), the Populate() to remake a new deck of 52 card (from the pool), a Shuffle() to randomize the deck, a Deal to remove the top card from the deck and return it.

Note that as you play the cards in the deck get used up.  You will need to come up with a better plan on what to do when the deck runs out, and implement it. This may require modifying and even adding new member functions to the existing object classes.

> :warning: Note: Some of the features used in the provided source code are naitive to c++14, so you need to compile with that version for the provided code to work. You can specify which langauge version you want to compile with -std=c++(VERSION).

So, a compilation for this program will look like `g++ -std=c++14 main.cpp Card.cpp Deck.cpp Hand.cpp -o lab13`

## 3. What you must do

Most of the game is already written. You must complete the following:

1. Card and Deck are done! <br>
2. In Hand.cpp, you must complete the Wins(), isBusted(), GetCardList(), and tally() methods.<br>
3. In main.cpp game() you must show the game state in the main game loop. This means you show the player cards and the current tally.<br>
4. In game(), add a house strategy to the main game loop. Usually the house draws on < 17 <br>
5. In main.cpp game() you must check for all the possible game win, lose or draw cases, and return "win", "lose", or "draw" to the main() function. <br>
6. In main.cpp main() you must keep track of the win, lose and draws, and display them. <br>

Use classes and objects to complete the program to play Blackjack (21). Using the code here, you will create a game that:

* Plays the house agains a single player.
* Play a game of Blackjack until someone wins, and then annoucing the winner, and tallying the wins, loses, and ties (pushes)
* Allow the user to continue to play again, drawing from the same (shrinking) deck, until the deck is empty.
* You may offer the user the chance to restart the deck when done


You should strive for the follow goals:

* Game works as specified
*  Code includes comments, with project information at top, pre and post conditions for each functions and other comments as needed.
*  The code has good formatting, indentation, and organization.
*  Good variable and function names, appropriate use of constants rather then literal numbers.
*  Class implementation: Logic is correctly implemented in the correct class methods

# Part 4. Submission [5 minutes]

Each group will submit a single **.zip file** named `lab-13.zip` containing all of your `.cpp` source code files on [Gradescope](http://gradescope.com) **before the end of your lab section**. **All submissions should be made by a group/team.** *Individual submissions will not be accepted.*  For your convenience, that page is relinked [here](https://cs50.readthedocs.io/ide/online/).
