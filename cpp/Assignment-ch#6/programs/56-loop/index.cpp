
/*
A program to diplay following output by for loop:
BBBBBBBBB
.BBBBBBB
..BBBBB
...BBB
....B
*/

#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout<<"B";
        }
        cout << endl;
        
    }
    
    



    return 0;
}
/*
#include <iostream>
using namespace std;

int main() {
    int size = 5; // Number of rows
    
    for (int i = 0; i < size; i++) { // Loop for rows
        for (int j = 0; j < i; j++)
          {
            cout << "."; // Print leading dots
        }
        for (int j = 0; j < (size * 2 - 1) - (2 * i); j++) {
            cout << "B"; // Print B's
        }
        cout << endl; // Move to the next line
    }
    
    return 0;
}

*/