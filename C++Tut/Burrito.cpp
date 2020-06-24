//
// Created by Jihun on 6/17/2020.
//

// This is a source file.
#include "Burrito.h"
#include <iostream>

using namespace std;

//:: --> It is a binary scope resolution operator.
// Burrito() constructor/function is a member of Burrito Class
// Why do we split up classes into cpp and h files?
// When distributing the function, Burrito.cpp will be compiled
// and others can access it through Burrito.h but they won't
// be able to change anything in the cpp file.
Burrito::Burrito() {
    cout << "I am a clown" << endl;
}

void Burrito::coolSaying() {
    cout << "preaching to the choir" << endl;
}
