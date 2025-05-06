/*

1
12
123

3
32
321

1
23
456

6
45
321



*/
#include<iostream>
using namespace std;

int main()
{
    int c=6;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
    {
       cout<<c;
       c--;
    }
    cout<<endl;
    }
    return 0;
}