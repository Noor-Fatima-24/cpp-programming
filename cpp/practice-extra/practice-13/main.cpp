/*
pyramid
     ---*    4-i = 1
     --* *
     -* * *
     * * * *

*/
#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int s = 3; s >= i; s--)
        {
            cout<<" ";
        }
        
        for (int j = 1; j <= i; j++)
        {
           cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}