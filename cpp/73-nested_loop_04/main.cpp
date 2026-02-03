/*
Floyd’s Triangle
1
2 3
4 5 6
7 8 9 10       */

#include<iostream>
using namespace std;

int main()
{
     int num = 1;

    for (int i = 0; i < 5; i++)
    {
        for (int p = 0; p < i; p++)
        {
             cout << " "<< num ;
            num ++;
        }
        cout<<endl;
    }
    
    return 0;
}