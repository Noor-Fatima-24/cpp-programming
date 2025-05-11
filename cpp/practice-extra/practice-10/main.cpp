/*

before:

****
****
****
****
****

hollow rectangle:

****
*  *
*  *
*  *
****

logic: 1: row no. 2-4 and col no. 2-3 we have to print spaces 
       2: row no. 1 & 5 and col no. 1 & 4 we have to print *  (use thn in if)

*/

#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <=5 ; i++)
    {
        for (int j = 1;j <=4 ; j++)
    {
       if ( i==1 || i==5 || j==1 || j==4  )
       {
        cout<<"*";
       }
       else{
        cout<<" ";
       }
        
    }
    cout<<endl;
    }
    
    return 0;
}