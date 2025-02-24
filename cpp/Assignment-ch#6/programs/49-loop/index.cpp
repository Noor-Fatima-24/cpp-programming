
/*
A program to print the following output:
                             1
                         1   2
                     1   2   3
                1    2   3   4
            1   2    3   4   5
*/


#include<iostream>
using namespace std;

int main()
{
    int row = 5;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row-i; j++)
        {
            cout<<"   ";
        }
        for (int n = 1; n <= i; n++)
        {
            cout<<n<<"  ";
        }
        
        cout<<endl;
    }
    




    return 0;
}