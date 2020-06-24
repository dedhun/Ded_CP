//
// Created by Jihun on 6/19/2020.
//
#include <iostream>
using namespace std;

// Factorial concept
// n! = n * (n-1) * (n-2)...

// 3! = 3 * 2! <--|
// |--------------|
// |
// |
// 2! = 2 * 1! <--|
//                |
// ---------------|
// |
// |
// |-------------< 1! = 1 * 0!

// n! = {
//          n * (n-1)!  (if n > 1)
//          1  otherwise (if n <= 1)
//      }


int factorialFinder(int x) {
    // We need to create a base case for recursive functions first
    if (x <= 1) {
        return 1;
    }
    else {
        return x * factorialFinder(x-1);
    }
}

// f(0) returns 1
// f(1) returns 1
// f(2) returns 2 * f(1) = 2 * 1 = 2
// f(3) returns 3 * f(2) = 3 * (2 * f(1)) = 3 * (2 * 1) = 6
// f(4) returns 4 * f(3) = 4 * (3 * f(2)) = 4 * (3 * (2 * f(1)) = 4 * (3 * (2 * 1)) = 4 * (3 * 2) = 4 * (6) = 24

//----------------------------------------------------------------------------------------------------------------------
// 1, 1, 2, 3, 5, 8

// Fn = {
//          F(n-1) + F(n-2)
//          1 otherwise (if n = 1 or 2)
//      }

int fibonacciSequence(int x) {
   if (x == 1 or x == 2) {
       return 1;
   }
   else {
       return fibonacciSequence(x-1) + fibonacciSequence(x-2);
   }
}

// f(3) = f(2) + f(1) = 1 + 1 = 2
// f(4) = f(3) + f(2) = [f(2) + f(1)] + 1 = 2 + 1 = 3

//----------------------------------------------------------------------------------------------------------------------
// Compute the sum of natural numbers until N.
// If N = 5, 5 + 4 + 3 + 2 + 1 + 0 = 15

int sumNatNum(int x) {
    if (x == 0){
        return 0;
    }
    else {
        return x + sumNatNum(x-1);
    }
}

int main() {
    cout << factorialFinder(0) << endl;
    cout << fibonacciSequence(4) << endl;
    cout << sumNatNum(5) << endl;
}
