/*
binary pattren / 0/1 pattren:

1
01
101
0101
10101

*/
#include<iostream>
using namespace std;
 
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
    {
        if ((i+j) %2 == 0)
        {
            cout<<"1";
        }
        else
        cout<<"0";
    }
    cout<<endl;
    }
    
    return 0;
}