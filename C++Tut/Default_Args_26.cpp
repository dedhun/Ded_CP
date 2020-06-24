//
// Created by Jihun on 6/18/2020.
//

#include <iostream>
using namespace std;

int volume(int l=1, int w=1, int h=1);

int main() {
    cout << volume();
}
`
int volume(int l, int w, int h) {
    return l*w*h;
}