#include<iostream>
using namespace std;

int main()
{
    for (int i = 8; i < 100; )
    {
        cout<<i<<" ";
        i=i+4;
        cout<<i<<" ";
        i=i+5;
        cout<<i<<" ";
          i=i+7;
    }
    
    return 0;
}