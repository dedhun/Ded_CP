//
// Created by Jihun on 6/24/2020.
//
#include <iostream>
using namespace std;

int main() {
    int jihun_bk[5] = {20, 54, 76, 832, 546};
    int sum = 0;

    for (int x = 0; x < 5; x++) {
        sum += jihun_bk[x];
    }

    cout << sum << endl;
}
