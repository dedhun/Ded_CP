//
// Created by Jihun on 6/24/2020.
//

#include <iostream>
using namespace std;

int main() {

    // Each integer is 4 bytes.

    int bucky[5];
    // & Memory Address  * Pointer which stores Memory Address
    int *bp0 = &bucky[0];
    // 4 bytes away
    int *bp1 = &bucky[1];
    // 4 bytes away
    int *bp2 = &bucky[2];

    cout << "bp0 is at " << bp0 << endl;
    cout << "bp1 is at " << bp1<< endl;
    cout << "bp2 is at " << bp2 << endl;

    // Pointers doesn't work like what we think in math,
    // Whenever u add integers to a pointer, it doesn't change the memory address of the pointer.
    // It only changes what element it is pointing to.

    // Whenever you are working with math and pointers, you are not changing the memory address of the pointer.
    // You are only changing the element it is pointing to.

    bp0++;
    cout << "bp0 is at " << bp0 << endl;
}