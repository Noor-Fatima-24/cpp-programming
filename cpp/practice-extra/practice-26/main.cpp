// Q10: Count digits of a number (e.g. input = 5432 → output = 4 digits)
#include<iostream>
using namespace std;

int main()
{
    int n,i=0;
    cout<<"Enter a number : ";
    cin>>n;

    // Special case for 0
    if (n == 0)
        i = 1;

    else {    
    for (; n != 0; n=n/10)
    {
        i++;
    }}
    cout<<"n = "<<i<<" digits.";
    

    return 0;
}