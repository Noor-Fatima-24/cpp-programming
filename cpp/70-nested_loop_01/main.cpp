// Right Triangle Star Pattern
//                 *
//                 * *
//                 * * *
//                 * * * *
//                 * * * * *

#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 4; i++)
    {
        for (int p = 0; p <= i; p++)
        {
           cout << "*";
        }
        cout << endl;
    }
    
    
    return 0;
}