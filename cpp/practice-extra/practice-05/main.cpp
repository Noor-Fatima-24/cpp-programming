/*
half pyramid after 180 rotation

before
*
**
***
after
    ---*   total no.of col  - current row no.  = space
    --**
    -***   4 - 3 = 1
    ****

*/
#include<iostream>
using namespace std;

int main()
{
    
    for (int i = 4; i >= 1; i--)
    {
        for (int s = 4; s >= 1 ; s++)
        {
            cout<<" ";
        }
        for (int j = 1; j >= i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    
    return 0;
}