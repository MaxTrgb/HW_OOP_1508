#include <iostream>
#include "myString.h"  

int main() {
    // Create myString objects using different constructors.

    myString defaultStr;

    myString arbitraryStr(100);

    myString userStr("Hello, user!");

    myString copiedStr = userStr;


    // Input a string for the defaultStr object from the user.
    defaultStr.input();

    // Display the content of the defaultStr object.
    defaultStr.display();

    // Input a string for the arbitraryStr object from the user.
    arbitraryStr.input();

    // Display the content of the arbitraryStr object.
    arbitraryStr.display();

    // Display the content of the userStr object.
    userStr.display();

    // Display the content of the copiedStr object (copy of userStr).
    copiedStr.display();

}
