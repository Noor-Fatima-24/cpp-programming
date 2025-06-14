// Q9: Take a number and print factorial using a loop.
// Example: 5! = 5×4×3×2×1 = 120
#include<iostream>
using namespace std;

int main()
{ 
    float n,f=1;
    cout<<"Enter a number : ";
    cin>>n;
    for (int i = n; i >= 1; i--)
    {
        f = i * f;
    }
    cout<<"Factorial = "<<f;
    
    return 0;
}