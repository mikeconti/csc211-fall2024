#include <iostream>
#include "MyString.h"

//-------------------------------------
// Constructors
//-------------------------------------

// Default Constructor
MyString::MyString() {

}

// Copy constructor; Copy the contents of the input string into the class's data member.
MyString::MyString(const char *) {
   
}

// Destructor; Should deallocate any dynamically allocated memory that the class uses.
MyString::~MyString() {

}



//-------------------------------------
// Setters and Getters
//-------------------------------------

// Sets the character at the given index to the character provided
void MyString::set(int, char) {
    return;
}

// Returns the character at the given index.
char MyString::get(int) {
    return 'a';
}



//-------------------------------------
// Methods
//-------------------------------------

// Public Methods

// Returns the length of string. This is the number of characters in the string, 
// excluding the null terminator.
unsigned int MyString::len() {
    return 0;
}


// Returns a pointer to a character array of the object's string.
const char *MyString::c_str() {
    return 0;
}

// Reverse the string. "hello" should turn into "olleh". 
// If you would like a challenge try to do it in-place (cannot create another array).
void MyString::reverse() {

}

// Find the first occurrence of this character, and return the index. 
// Return `-1` if it can't be found.
int MyString::find_first(char) {
    return 0;
}

// Find the first occurrence of the input string. 
// Return the index of the starting character. 
// Return the `-1` if it can't be found.
int MyString::find_first(const char *) {
    return 0;
}   

// Find the last occurrence of this character, and return the index. 
// Return the `-1` if it can't be found.
int MyString::find_last(char) {
    return 0;
}

// Find the last occurrence of the input string. 
// Return the index of the starting character. 
// Return the `-1` if it can't be found.
int MyString::find_last(const char *) {
    return 0;
}

// Return true if the str stored is equivalent to the given string
// Return false if they are not the same
bool MyString::compare(const char *) {
    return 0;
}

// Append a single character onto the end of the string.
void MyString::append(char) {
    return;
}

// Concatenate the input string to the object's string.
void MyString::append(const char *) {
    return;
}



//-------------------------------------
// Operator Overloading
//-------------------------------------

//Overload the '[]' operator to fuction as we expect
// Ex. MyString("Hello")[2] == 'l'
char MyString::operator[](const unsigned int index) const {
    return 'a';
}

// Overload the '+' operator to concatenate the two strings together
MyString MyString::operator+(const MyString str2) const {
    MyString temp;
    return temp;
}

// Overload the '*' operator to return the string concatenated on itself x times
// Ex. "Hello" * 3 == "HelloHelloHello"
MyString MyString::operator*(const int x) const {
    MyString temp;
    return temp;
}