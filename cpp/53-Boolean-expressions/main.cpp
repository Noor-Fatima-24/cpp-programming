#include<iostream>
using namespace std;

int main()
{
    cout << boolalpha;
    //Using comparison operators
    int a = 5, b = 10;
bool r1 = a < b;     // true
bool r2 = a == b;    // false
bool r3 = a != b;    // true
bool r4 = a >= b;    // false
cout << r1 << endl << r2 << endl<< r3 << endl<< r4 << endl;

//Using a boolean variable directly
bool c = true;

if (c) {
    cout << "You are a coder";
}




    return 0;
}


