/*

1/0   binary pattren:

logic: if No.row + No.col = even no.  so print "1"
       if No.row + No.col = odd no.  so print "0"
   
1        r=1 , c=1    r+c     1+1=2
01       r=2,c=1  2+1=3    r=2,c=2  2+2=4
101
0101  

*/

#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ( (i+j) % 2 == 0) // if No.row + No.col = even no.  so print "1"
            {
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    
    return 0;
}
    
   