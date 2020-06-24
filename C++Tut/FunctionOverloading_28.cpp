//
// Created by Jihun on 6/18/2020.
//
#include <iostream>
using namespace std;

// You can build multiple functions with the same name.
// We can't just put two types in the parameter to account for int and float.
// Therefore, we use function overloading.
void printNumber(int x) {
    cout << "i am printing an integer " << x << endl;
};

void printNumber(float x) {
    cout << "i am printing a float " << x << endl;
}

int main() {
    int a = 54;
    float b = 32.4896;

    printNumber(a);
    printNumber(b);
}