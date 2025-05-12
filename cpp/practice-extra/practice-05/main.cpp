/*
half pyramid after 180 rotation

before
*
**
***
after
    ---*    
    --**
    -***    4 - 3 = 1         total no.of col  - current row no.  = space
    ****
logic:
       1): no.symbol = no.row 
       2): total no.of col  - current row no.  = space
    so for space s must be <= ( 4 - i )


*/
#include<iostream>
using namespace std;

int main()
{
    
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
    {
       if (  j <= (  4 - i ) )
       {
        cout<<" ";
       }
       else
       {
        cout<<"*";
       }
        
    }
    cout<<endl;
    }
    
    
    return 0;
}