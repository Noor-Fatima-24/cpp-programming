#include<iostream>
using namespace std;

int main() 
{
    int arr[5],sum=0;
    cout<<"Enter 5 numbers : ";
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    float avg = sum/5.0;
    cout<<"sum = "<<sum<<" avg = "<<avg;

    
    return 0;
}