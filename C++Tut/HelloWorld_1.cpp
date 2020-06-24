// This is a preprocessor directive.
// We are going to be including a file i/o stream in this program
// that we are going to be using later.
// Therefore, we are including a file i/o stream that we didn't make
// but it is needed to run this program later.
// This is called a header file.
#include <iostream>

//std is a standard library.
// If you are not using namespace std, it means that u have to add std::cout and std::endl for every object/variable
using namespace std;

// this is a function.
// main is where it is going to start the program
// integers main always works with integers.
int main() {
    // statements
    // cout is an output stream object.
    // << This is a stream insertion operator
    //  (This prints it on the screen)
    // endl is endline.
    cout << "Hello, World!" << endl;
    // return 0 means ur program is successful.
    return 0;
}
