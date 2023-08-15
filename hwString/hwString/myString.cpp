#include "myString.h"  // Including the header file for your custom string class.
#include <iostream>    // Including the standard input/output stream library.
#include <cstring>     // Including the C string manipulation functions.
using namespace std;  // Using the standard namespace for shorter syntax.

// Constructor: Creates an empty myString object.
myString::myString() {
    str = new char[MAX_LENGTH + 1];  // Allocating memory for the string.
    str[0] = '\0';  // Setting the first character to null terminator.
}

// Constructor: Creates a myString object with a specified size.
myString::myString(int size) {
    str = new char[size + 1];  // Allocating memory for the string with the given size.
    str[0] = '\0';  // Setting the first character to null terminator.
}

// Constructor: Creates a myString object from a C-style string.
myString::myString(const char* initialStr) {
    str = new char[strlen(initialStr) + 1];  // Allocating memory for the string.
    strcpy_s(str, strlen(initialStr) + 1, initialStr);  // Copying the input string.
}

// Copy Constructor: Creates a copy of an existing myString object.
myString::myString(const myString& other) {
    str = new char[strlen(other.str) + 1];  // Allocating memory for the copy.
    strcpy_s(str, strlen(other.str) + 1, other.str);  // Copying the content of the other object's string.
}

// Destructor: Frees the dynamically allocated memory when the object is destroyed.
myString::~myString() {
    delete[] str;  // Deallocating the memory used for the string.
}

// Method to input a string from the user.
void myString::input() {
    cout << "Enter a string: ";
    cin.getline(str, MAX_LENGTH + 1);  // Reading a line of input from the user.
}

// Method to display the string.
void myString::display() const {
    cout << str << endl;  // Printing the stored string.
}
