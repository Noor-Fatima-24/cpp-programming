/*
A program to print following output using loop:

1  2  3  4  5 
2  3  4  5
3  4  5
4  5
5    

*/



#include<iostream>
using namespace std;

int main()
{
    

    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout<<j<<"\t";
        }
        cout<<endl;
    }
    return 0;
}