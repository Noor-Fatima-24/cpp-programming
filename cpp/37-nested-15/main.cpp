
/*
   1 
  1 2 
 1 2 3 
1 2 3 4
 

---* 
--**
-***
****

*/
#include<iostream>
using namespace std;

int main()
{
   for (int i = 1; i <= 4; i++)
   {
    for (int s = 0; s >= i-3 ; s--)
    {
        cout<<" ";
    }
    
    for (int j = 1; j <= i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
   }
   
    
    return 0;
}