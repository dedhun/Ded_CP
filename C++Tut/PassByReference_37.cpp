//
// Created by Jihun on 6/24/2020.
//

#include <iostream>
using namespace std;
void passByValue(int x);
void passByReference(int *x);


// Two Different Ways to Pass Params into Functions

// - Pass it by value
// This will make a copy of the variable and the original value cannot be modified.

// - Passing by reference (Passing in the variable's address)
// U get a direct access to the variable. Therefore, the original value can be modified.
// It can prevent copies and extra burden on ur computer.

int main() {
    int betty = 13;
    int sandy = 13;

    passByValue(betty);
    passByReference(&sandy);

    cout << "betty is now " << betty << endl;
    cout << "sandy is now " << sandy << endl;
}

void passByValue(int x) {
    x = 99;
}

// THey need a pointer argument to receive the memory address
void passByReference(int *x) {
    *x = 66;
}