#include<iostream>
using namespace std;

int sum(int arr[5],int n)
{
     n=0;
    for (int i = 0; i <= 4; i++)
    {
        n=n+arr[i];
         
    }
    cout<<n;
    return 0;
}

int main()
{
    int arr[5],n;
    cout<<"E";
    for (int i = 0; i <=4; i++)
    {
        cin>>arr[i];
    }
    sum(arr,n);
    return 0;
}