//
// Created by Jihun on 6/18/2020.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Srand with time will generate seconds that are constantly increasing when
    // every second passes
    srand(time(0));

    for (int x = 1; x < 25; x++) {
        // remainders must be smaller than divisor
        // 25 / 6 = 4 R 1. 1 < 6 True
        cout << 1+(rand()%6) << endl;
    }
}