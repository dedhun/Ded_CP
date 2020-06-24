//
// Created by Jihun on 6/16/2020.
//

#include <iostream>
// we will be working with strings in this file.
#include <string>
using namespace std;

// A constructor is a function that gets called automatically as soon
// as you create an object.
class JihunClass {
public:
    // Constructors will never have a return type.
    // The constructor name has to be the same as class name
    // The main reason that people make constructors are to give
    // variables an initial value.
    JihunClass(string z) {
        setName(z);
    }
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
    JihunClass jc("Lucky Jihun");
    cout << jc.getName();

    // Even though they are from the same class, it is
    // not like they are changing the same variable.
    // You can create multiple objects from the same class
    // They don't overwrite each other.
    // They are each assigned a set of variables.

    JihunClass jc2("Lucky Dumb Jihun");
    cout << jc2.getName();

    return 0;
}



