/*

   123
   123

   ***
   ***

   321
   321

   123
   456

   654
   321

*/


#include<iostream>
using namespace std;

int main()
{
    int c=6;
    for (int i = 1; i <= 2; i++)
    {
        for (int m = 1; m <= 3; m++)
        {
            cout<<c;
            c--;
        }
        cout<<endl;
    }
    
    return 0;
}