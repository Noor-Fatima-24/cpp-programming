// Statement:

/*
Write a C++ program to demonstrate the working of unary operators.
Show the difference between pre-increment, post-increment, pre-decrement
 and post-decrement on an integer variable.
*/

#include <iostream>
using namespace std;

int main() {

    int x = 5;

    cout << "Original x = " <<x<< endl;
//x=5
    cout << "Post Increment (x++) = " << x++ << endl;   // prints old value
    cout << "After Post Increment x = " << x << endl;
//x=6
//x=7
    cout << "Pre Increment (++x) = " << ++x << endl;    // prints new value
//x=6
    cout << "Post Decrement (x--) = " << x-- << endl;
    cout << "After Post Decrement x = " << x << endl;
//x=5
    cout << "Pre Decrement (--x) = " << --x << endl;

    return 0;
}





