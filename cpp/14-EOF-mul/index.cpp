#include<iostream>
using namespace std;

int main()
{
    int num,mul=1;
    cout<<endl<<"HELLO!"<<endl;
    cout<<"(enter Ctrl+Z or Ctrl+D or any non-numeric character to stop)"<<endl<<"Enter numbers to multiply :";
    
    while (cin >> num)
    {
        mul *= num;
    }
    cout<<endl<<"Ans = "<<mul;
    return 0;
}