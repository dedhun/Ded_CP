//
// Created by Jihun on 6/17/2020.
//

#include <iostream>
using namespace std;

int main() {
    int age = 101;

    if (age > 60) {
        cout << "wow you are old" << endl;
        if (age > 100) {
            cout << "why are u still alive?!" << endl;
        }
    } else {
        cout << "you are young, get a job" << endl;
    }

    return 0;
}