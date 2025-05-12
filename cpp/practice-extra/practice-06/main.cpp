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

  1234    reverse of outter loop as a change is noticed in pattrens shape
   123
    12
     1


*/

// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i = 4; i >= 1; i--)
//     {
//         for (int s = i; s <= 4 ; s++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }

//     return 0;
// }


#include<iostream>
using namespace std;


/*
     1
    12
   123
  1234

basic logic for all time loop

1) : outer loop
2) : inner loop
3) : element sequence
4) : space logic

*/

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout<<k;
        }
        cout<<endl;
    }
    
    return 0;
}