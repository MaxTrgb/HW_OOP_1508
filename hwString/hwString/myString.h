#pragma once

class myString {
private:
    static const int MAX_LENGTH = 80;  // Maximum length for strings.
    char* str;  

public:
    // Default constructor: Creates an empty myString object.
    myString();

    // Constructor: Creates a myString object with a specified size.
    myString(int size);

    // Constructor: Creates a myString object from a C-style string.
    myString(const char* initialStr);

    // Copy constructor: Creates a copy of an existing myString object.
    myString(const myString& other);

    // Destructor: Frees the dynamically allocated memory when the object is destroyed.
    ~myString();

    // Method to input a string from the user.
    void input();

    // Method to display the stored string.
    void display() const;
};
