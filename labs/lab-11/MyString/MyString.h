#ifndef __MYSTRING_H__
#define __MYSTRING_H__

class MyString {
    private:

    public:
        // Default constructor; Should store an empty string.
        MyString();
        
        // Copy constructor; Copy the contents of the input string into the class's data member.
        MyString(const char *);
        
        // Destructor; Should deallocate any dynamically allocated memory that the class uses.
        ~MyString();

        // Returns the length of string. This is the number of characters in the string, 
        // excluding the null terminator.
        unsigned int len();

        // Sets the character at the given index to the character provided
        void set(int, char);
        
        // Returns the character at the given index.
        char get(int);
        
        // Returns a pointer to a character array of the object's string.
        const char *c_str();
        
        // Reverse the string. "hello" should turn into "olleh". 
        // If you would like a challenge try to do it in-place (cannot create another array).
        void reverse();
        
        // Find the first occurrence of this character, and return the index. 
        // Return `-1` if it can't be found.
        int find_first(char);
        
        // Find the first occurrence of the input string. 
        // Return the index of the starting character. 
        // Return the `-1` if it can't be found.
        int find_first(const char *);
        
        // Find the last occurrence of this character, and return the index. 
        // Return the `-1` if it can't be found.
        int find_last(char);
        
        // Find the last occurrence of the input string. 
        // Return the index of the starting character. 
        // Return the `-1` if it can't be found.
        int find_last(const char *);
        
        // Return true if the str stored is equivalent to the given string
        // Return false if they are not the same
        bool compare(const char *);
        
        // Append a single character onto the end of the string.
        void append(char);
        
        // Concatenate the input string to the object's string.
        void append(const char *);

        //Overload the '[]' operator to fuction as we expect
        // Ex. MyString("Hello")[2] == 'l'
        char operator[](const unsigned int index) const;

        // Overload the '+' operator to concatenate two strings together
        MyString operator+(const MyString str2) const;
        
        // Overload the '*' operator to return the string concatenated on itself x times
        // Ex. "Hello" * 3 == "HelloHelloHello"
        MyString operator*(const int x) const;
};

#endif