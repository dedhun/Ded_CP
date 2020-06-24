//
// Created by Jihun on 6/18/2020.
//
#include <iostream>
#include <cmath>
using namespace std;
 int main() {
    int age = 16;

    switch(age) {
        case 16:
            cout << "hey you can drive now!" << endl;
            break;
        case 18:
            cout << "go buy some lotto tickets~!" << endl;
            break;
        case 21:
            cout << "buy me some beer" << endl;
            break;
        default:
            cout << "Sorry you get nothing" << endl;
    }
}
