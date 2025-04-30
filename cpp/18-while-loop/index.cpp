#include<iostream>
using namespace std;

int main()
{
    int num=1;
    string input;
    cout<<"hello!\nEnter your name to create a loop:";
    cin>>input;
    while (num<=5)
    {
        cout<<input<<endl;
        num++;
    }
    cout<<"bye!"<<input;
    

    return 0;
}