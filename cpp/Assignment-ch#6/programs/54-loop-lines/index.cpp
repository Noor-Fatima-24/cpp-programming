
/*
A program to display lines as follow by nested for loop :
1 2 4 6 
2 2 4 6
3 2 4 6
4 2 4 6

*/

#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 5; i++)
    {
             cout << i << " ";
        for (int j = 1; j < 7; j++)
        {
             if ( j % 2 == 0)
             {
                cout  << j << " ";
             }
        }
        cout<<endl;
    }
    return 0;
}