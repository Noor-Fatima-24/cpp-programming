// Q7: Print the table of any number entered by user (1 to 10).
// by while loop
#include<iostream>
using namespace std;

int main()
{
    int a,i=1;
    cout<<"Enter a number (1-10) : ";
    cin >> a;
    if ( a <= 10 && a >= 1 )
    {
        while (i <= 10)
       {
        cout<<a <<" * "<<i<<" = "<<a*i<<endl;
        i++;
       }
    }
    else{
        cout<<"Invalid input! enter valid number.";
    }
    
    
    return 0;
}