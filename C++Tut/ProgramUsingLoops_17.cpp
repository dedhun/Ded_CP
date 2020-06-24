//
// Created by Jihun on 6/18/2020.
//
#include <iostream>
using namespace std;

int main() {
    int x = 1;
    int number;
    int sum = 0;

    while (x <= 5) {
        cout << "Enter number " << x << endl;
        cin >> number;
        sum += number;
        x++;
    }

    cout << "Here is the sum of your " << x-1 << " numbers: " << sum << endl;

}
