//
// Created by Jihun on 6/11/2020.
//
#include <iostream>

using namespace std;

int main(){

    int a;
    int b;
    int sum;

    cout << "Enter a number, Jihun! \n";
    // Cin is a stream extraction operator
    // Cin takes user info and gives it to the computer
    // Cout is the opposite
    cin >> a;

    cout << "Enter another number, Jihun! \n";
    cin >> b;

    sum = a + b;
    cout << "The sum of those numbers is " << sum << ".";

    return 0;
}

