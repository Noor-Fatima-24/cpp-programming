// Q7: Print the table of any number entered by user (1 to 10).
// 2*2=4  n*c=n*c
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number (1-10) : ";
    cin >> a;
    if ( a <= 10 && a >= 1 )
    {
        for (int i = 1; i <= 10; i++)
       {
        cout<<a <<" * "<<i<<" = "<<a*i<<endl;;
       }
    }
    else{
        cout<<"Invalid input! enter valid number.";
    }
    
    
    return 0;
}