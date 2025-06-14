
//Calculate factorial of a number.
#include<iostream>
using namespace std;

int main()
{
    int f=1,n;
    cout<<"Enter a number to find its factorial : ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
       f = i * f; 
    }
    cout<<"fact = "<<f;
    return 0;
}