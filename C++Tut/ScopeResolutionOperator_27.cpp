//
// Created by Jihun on 6/18/2020.
//
#include <iostream>
using namespace std;
//void jihun();
// Global Scope
int tuna = 69;

int main() {
    // Block Scope
    double tuna = 20;
    //:: Unary scope resolution operator will use the global variable tuna.
    cout << ::tuna << endl;
//    jihun();
}

//void jihun() {
//    cout << tuna << endl;
//}

