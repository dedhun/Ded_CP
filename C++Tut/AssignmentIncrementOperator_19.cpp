//
// Created by Jihun on 6/18/2020.
//
#include <iostream>
using namespace std;

int main() {
    // return 0 is optional as the new vers will assume
    // you return 0 if you didn't mention anything
    int x = 10;
    // Assignment Ops
//    x += 10;
//    x -= 10;
//    x *= 10;
//    x /= 10;
//    x %= 5;

    // Increment Operator
    // It runs the code and then when the line ends,
    // x will then increment by 1.
    cout << x++ << endl;
    cout << x << endl;

    // For ++ in front, it runs the code and then ,
    // it will directly increase x in the same line.
    cout << ++x << endl;
    cout << x << endl;
}
