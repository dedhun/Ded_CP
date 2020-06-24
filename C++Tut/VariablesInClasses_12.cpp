//
// Created by Jihun on 6/16/2020.
//
#include <iostream>
// we will be working with strings in this file.
#include <string>
using namespace std;

class JihunClass {
public:
    // Setter Function (Set the Variable)
    void setName(string x) {
        name = x;
    }
    // Getter Function
    string getName() {
        return name;
    }
    // These functions make a private name variable to public
private:
    string name;
    // Making Class Variables public is generally not a good
    // code practice.
    // public:
    //    string name;
};

int main() {
    JihunClass jc;
    jc.setName("Hwang Jihun");
    cout << jc.getName();
    // JihunClass jihunObject;
    // jihunObject.name = "Hwang Jihun";
    // cout << JihunObject.name;
    return 0;
}

