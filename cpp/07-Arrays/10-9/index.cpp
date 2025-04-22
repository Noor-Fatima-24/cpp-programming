#include<iostream>
using namespace std;

int main()
{
    int c[10], i;
    
    cout << "Enter 10 numbers: ";
    for(i = 0; i < 10; i++)
    {
        cin >> c[i];
    }
    
    cout << "Numbers in array divisible by 9 are: ";
    for(i = 0; i < 10; i++)
    {
        if(c[i] % 9 == 0)
        {
            cout << c[i] << " ";
        }
    }
    cout << endl;
    return 0;
}