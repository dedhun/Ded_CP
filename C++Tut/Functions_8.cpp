//
// Created by Jihun on 6/16/2020.
//

#include <iostream>
using namespace std;
// Function Prototyping
void printSomethingPrototype();

// If the function does not return anything
// put void
// The parameters are inside the brackets
void printSomething() {
    cout << "oooo i am text on the screen" << endl;
}

int main() {
    //Calling the printSomething Function here
    printSomething();
    printSomethingPrototype();
    return 0;
}

void printSomethingPrototype() {
    cout << "oooo i am text on the screen" << endl;
}
