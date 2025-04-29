#include<iostream>
using namespace std;

int main()
{
    int num,mul;
    cout<<endl<<"HELLO!"<<endl;
    cout<<"Enter numbers to multiply (Ctrl+Z or Ctrl+D to stop):";
    cin>>num;
    while (cin >> num)
    {
        mul *= num;
    }
    cout<<endl<<"Ans = "<<mul;
    return 0;
}