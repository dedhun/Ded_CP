//
// Created by Jihun on 6/16/2020.
//

// Classes are basically an easy way to group all your functions
// and variables.

#include <iostream>
using namespace std;

// Access Specifiers
// Sometimes you want to make functions that you can only use in your class
// and sometimes you want to make functions that anybody can use outside
// your class
// you need to make your functions in your class public so that it can be used in main.
// If you don't want main to be able to use the function in you class, then you have to do
// private

// Declaring a class

class JihunClass {
public:
    void coolSaying() {
        cout << "preaching to the choir" << endl;
    }
};

int main() {
    // Objects is how you access the stuff inside of your class
    // It is needed so that the program can tell which function
    // you want to use in which class.
    JihunClass JihunObject;
    JihunObject.coolSaying();
    return 0;
}