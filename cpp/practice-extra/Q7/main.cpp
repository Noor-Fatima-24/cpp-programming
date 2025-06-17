#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
       for (int j = 1; j <= 4-i; j++)
    {
    cout<<" ";  
    }
    for (int m = 1; m <= i; m++)
    {
    cout<<" *";
    }
    cout<<endl;
    }
    //down
    for (int i = 4; i >= 1; i--)
    {
       for (int j = 1; j <= 4-i; j++)
    {
    cout<<" ";  
    }
    for (int m = 1; m <= i; m++)
    {
    cout<<" *";
    }
    cout<<endl;
    }
    
    return 0;
}
//don