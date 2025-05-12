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
    
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
    {
        cout<<"*";
    }
    cout<<endl;
    }
    
    
    return 0;
}