#include<iostream>
using namespace std;

int main()
{
    int c=6;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<c;
            c--;
        }
        cout<<endl;
    }
    
    return 0;
}
