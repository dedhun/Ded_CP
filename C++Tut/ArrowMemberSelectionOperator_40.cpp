//
// Created by Jihun on 6/24/2020.
//

#include <iostream>
#include "Sally.h"

using namespace std;

int main() {
    // Arrow Member Selection Operator (-->)
    Sally sallyObject;

    //Sally class is a datatype u created
    Sally *sallyPointer = &sallyObject;

    sallyObject.printCrap();

    //Whenever you are using a pointer to access stuff inside a class, you need an arrow member selection operator
    sallyPointer->printCrap();
}