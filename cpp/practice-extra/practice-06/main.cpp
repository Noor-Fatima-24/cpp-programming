/*

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

  1234  reverse of outter
   123
    12
     1

*/

#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int s = 1; s <= 4-i ; s++)
        {
            cout<<" ";
        }
        for (int j = 4; j >= 4; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}