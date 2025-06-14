// Q2: Take radius from user and print area and circumference of a circle.
// Hint: Area = πr², Circumference = 2πr (Use 3.14 for π)
#include<iostream>
using namespace std;
int main()
{
    double r,a,c;
    cout<<"Enter radius :";
    cin>>r;
    a =  (3.14)*(r*r);
    c =  2*(3.14)*r;
    cout<<"Area ="<<a<<endl<<"Circrumfrence ="<<c;
    return 0;
}