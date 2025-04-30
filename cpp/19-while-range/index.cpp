#include<iostream>
using namespace std;

int main()
{
    int s,e;
    
    cout<<"\nhello!\nEnter a starting and ending number of numerical series\nStarting No:";
    cin>>s;
    cout<<"Ending No:";
    cin>>e;
    cout<<"series: \n";
    while (s <= e)
    {
        cout<<"\t"<<s<<endl;
        s++;
    }
    cout<<"bye!";
    
    return 0;
}