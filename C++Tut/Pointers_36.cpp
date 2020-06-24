//
// Created by Jihun on 6/24/2020.
//
#include <iostream>
using namespace std;



int main() {
    int fish = 5;
    // & --> memory address operator (Address of where your variable fish lives)
    // In this case, the address in your memory of a fish
    cout << "The memory address of the fish is " << &fish << endl;

    // Pointers (A special type of variable that contains/points to a memory address as a value)
    // * is for stating pointer variable

    // Since the memory address is not an integer/float, we will have to use a special type of variable called pointers.
    int *fishPointer;
    fishPointer = &fish;

    cout << fishPointer << endl;
}
