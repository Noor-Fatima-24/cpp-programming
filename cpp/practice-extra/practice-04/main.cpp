/*
before
*
**
***
after
***
**
*

123
12
1

123
45
6


6
45
321

*/


#include<iostream>
using namespace std;

int main()
{
    for (int i = 3; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
    {
       cout<<"*";
    }
    cout<<endl;
    }
    return 0;
}