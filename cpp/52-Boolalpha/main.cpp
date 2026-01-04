#include<iostream>
using namespace std;

int main()
{
    bool a = true;

cout << boolalpha;   // print as true/false instead of default 0/1
cout << a << "\n";  // Outputs true

cout << noboolalpha; // reset to 1/0
cout << a << "\n";  // Outputs 1
    return 0;
}

