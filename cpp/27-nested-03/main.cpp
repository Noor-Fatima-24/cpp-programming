/*
03: Number Pattern – Pyramid Style
1
1 2
1 2 3
1 2 3 4
*/
#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}