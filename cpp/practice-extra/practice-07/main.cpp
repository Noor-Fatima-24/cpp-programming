/*

    ---*   total no.of col  - current row no.  = no.of space
    --**
    -***   4 - 3 = 1
    ****

     1
    12
   123
  1234

     1
    22
   333
  4444

     4
    34
   234
  1234

     1
    23
   456

     6
    45
   321
  
     3
    22
   111

*/
#include<iostream>
using namespace std;

int main()
{
    
    
    for (int i = 1; i <= 3; i++)
    {
        for (int j =1 ; j <= 3; j++)
        {
           if (j <= 3-i)
           {
            cout<<" ";
           }
           else
           {
            cout<<i;
           }
        }
       cout<<endl; 
    }
    
    return 0;
}