/*

Floyd's Triangle:

1
2 3
4 5 6
7 8 9 10


*/ 
#include <iostream>
using namespace std;

int main() {
    int count = 1;  // Start from 1

    for (int i = 1; i <= 4; i++) {          // Outer loop for rows
        for (int j = 1; j <= i; j++) {      // Inner loop for numbers in each row
            cout << count << " ";
            count++;                        // Increment the number after printing
        }
        cout << endl;                       // Move to next line after each row
    }

    return 0;
}
