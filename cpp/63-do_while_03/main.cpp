// Table of a Number

#include <iostream>
using namespace std;

int main() {
    int num, i = 1;
    cout << "Enter a number: ";
    cin >> num;
// num =  2
    do {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    } while (i <= 10);

    return 0;
} 



