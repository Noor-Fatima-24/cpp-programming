/*

before: 

****
****
****
****

rhombus pattren:

---****    row no.1   *=4  space = 3   4-1=3   row no. - no.of symbol = no.of space   
--****     row no.2   *=4  space = 2   4-2=2 
-****      row no.3   *=4  space = 1   4-3=1 
****       row no.4   *=4  space = 0   4-4=0 

logic: row no. - no.of symbol = no.of space 

*/

#include<iostream>
using namespace std;

int main()
{
    int s=3;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
        if ( 4 - i  == s)
         {
            cout<<" ";
            s--;
         }
         else{
            cout<<"*";
         }  
        }
        cout<<endl;
    }
    
    return 0;
}
// to be continue...