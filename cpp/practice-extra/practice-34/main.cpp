// pointers in cpp
#include<iostream>
using namespace std; 

int main() {
    int x = 20;
    int* ptr = &x;  // pointer to x

    cout << "Address of x (ptr): " << ptr << endl;

    *ptr = 50;  // change value of x using pointer

    cout << "Address of x (ptr) after change: " << ptr << endl;
    cout << "New value of x: " << x << endl;  // Output: 50

    return 0;
}
