//
// Created by Jihun on 6/24/2020.
//

#include <iostream>
using namespace std;

int main() {

    //sizeof (size of variable,array, etc) (how many bytes it take)
    //char c;
    //int i;
    //double d; // double is more precise (The more precise a value is, the more memory it needs)
    //cout << sizeof(d) << endl;

    // 10 * 8 bytes of memory
    double jihun[10];
    cout << sizeof(jihun) << endl;

    // Number of elements in an array
    cout << sizeof(jihun) / sizeof(jihun[0]) << endl;
}