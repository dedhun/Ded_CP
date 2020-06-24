//
// Created by Jihun on 6/18/2020.
//
#include <iostream>
using namespace std;

int main() {
    int age;
    int ageTotal = 0;
    int numberOfPeopleEntered = 0;

    cout << "Enter first person's age or input -1 to quit" << endl;
    cin >> age;

    while (age != -1) {
        ageTotal += age;
        numberOfPeopleEntered++;

        cout << "Enter the next person's age or input -1 to quit" << endl;
        cin >> age;
    }

    cout << "Number of people entered: " << numberOfPeopleEntered << endl;
    cout << "Average Age: " << ageTotal / numberOfPeopleEntered;
    return 0;
}