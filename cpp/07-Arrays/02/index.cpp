#include<iostream>
using namespace std;

void sum(int , int)
int main()
{
    int a, b;
    cout<<"enter two values:";
    cin>>a>>b;
    int s = sum ( a + b);
    cout<<"sum="<<s;
    return 0;
}
int sum ( int c , int d )
{
    return c+d;
}