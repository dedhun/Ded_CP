//
// Created by Jihun on 6/24/2020.
//

#include "Jihun_41.h"
#include <iostream>

using namespace std;

Jihun_41::Jihun_41() {
    cout << "I am the constructor!" << endl;
}

//D constructors do not have parameters
// It never has a return value. U can't state void too.
// You can't overload D constructors too.
Jihun_41::~Jihun_41() {
    // When your object is automatically deleted/destroyed, the d constructor will run.
    cout << "I am the d constructor!" << endl;
}