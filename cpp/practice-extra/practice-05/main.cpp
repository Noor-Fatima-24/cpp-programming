#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int s = 0; s < 5-i; s++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j < i; j++)
        {
            cout<<" @" ;
        }
        cout<<endl;
    }
    
    return 0;
}