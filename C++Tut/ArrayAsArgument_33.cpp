//
// Created by Jihun on 6/24/2020.
//

#include <iostream>
using namespace std;

void printArray(int theArray[], int sizeOfArray);

int main() {
    int jihun[3] = {20, 54, 675};
    int bucky[6] = {54, 24, 7, 8, 9, 99};

    printArray(jihun, 3);
}

void printArray(int theArray[], int sizeOfArray) {
    for (int x = 0; x < sizeOfArray; x++) {
        cout << theArray[x] << endl;
    }
}

