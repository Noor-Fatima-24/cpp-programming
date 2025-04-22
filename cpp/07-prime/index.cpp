#include<iostream>
using namespace std;

int main()
{
    int noor, i;
    
    cout << "Enter a positive integer: ";
    cin >> noor;
    if (noor <= 1 || noor == 0) 
    {
        cout << noor << " is not a prime number";
    }
    else 
    {
        for (i = 2; i <= noor/2; i++) 
        {
            if (noor % i == 0) 
            {
                cout << noor << " is not a prime number";
                return 0;
            }
        }
        cout << noor << " is a prime number";
    }
    return 0;
} 