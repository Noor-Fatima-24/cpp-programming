//// Q1: Take input of two numbers and print their sum, difference, product, and division.
#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Hello !"<<endl;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    if ( ( a > 0 ) && ( b > 0) )
    {
        cout<<"sum = "<<a+b<<endl<<"Dif = "<<a-b<<endl<<"MUl = "<<a*b<<endl<<"Div = "<<a/b<<endl;
    }
    else
    {
        cout<<"Invalid input! try again.";
    }
    return 0;
}