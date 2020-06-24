//
// Created by Jihun on 6/16/2020.
//

#include <iostream>

using namespace std;

int main() {
    //Addition
    int x = 4 + 6;

    //Substraction
    x = 8 - 4;

    //Multiplication
    x = 8 * 4;

    //Division
    x = 81 / 3;

    x = 81 / 2;

    //Remainder
    x = 81 % 2;

    // Order of Precedence
    // Parentheses always comes first
    // It does the multiplication, division then
    // addition and subtraction. (BEDMAS)
    x = 6 * 4 + 8 * 4 + 9 / 20;

    x = (4 + 3) * 7;

    cout << x;

    return 0;
}