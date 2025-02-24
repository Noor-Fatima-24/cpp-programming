
// Write a program to print the following sequence
// 8 12 17 24 28 33 … 100


#include <iostream>
using namespace std;

int main() {
    int term = 8; 
    int step = 0; 

    cout << "Sequence: ";

    while (term <= 100) 
    { 
        cout << term << " ";

        if (step % 3 == 0) 
        {
            term += 4;
        } 
        else if (step % 3 == 1)
         {
            term += 5;
         }
         else 
         {
            term += 7;
         }

        step++; 
    }

    cout << endl;
    return 0;
}


