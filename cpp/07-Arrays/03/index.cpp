#include<iostream>
using namespace std;

int main() 
{
    int A[10],n,loc=-1;
    for (int i = 0; i < 10; i++)
    {
        cout<<"enter value";
        cin>>A[i];

    }
    cout<<"enter value to search about:";
    cin >> n;
    for (int i = 0; i < 10; i++)
    {
        if (A[i] == n)
        {
            loc=i;
            break;
        }
       
        
    }
    if (loc==-1)
    {
        cout<<"value not found in array";
    }
    else
    {
        cout<<"value found in array at location : "<<loc;
    }
    
    
    return 0;
}