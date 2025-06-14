// Q7: Print the table of any number entered by user (1 to 10).
// by do while loop
#include<iostream>
using namespace std;

int main()
{
    int a,i=1;
    cout<<"Enter a number (1-10) : "; 
    cin >> a;
    if ( a <= 10 && a >= 1 )
    {
        do
        {
        cout<<a <<" * "<<i<<" = "<<a*i<<endl;
        i++;
        } 
        while (i <= 10);
        
    }
    else{
        cout<<"Invalid input! enter valid number.";
    }
    
    
    return 0;
}