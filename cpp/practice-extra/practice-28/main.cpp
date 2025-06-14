// Q12: Find the largest element in an array of 10 numbers.
#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    cout<<"Enter 10 numbers in array : ";
    
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int l=arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (l < arr[i])
        {
            l=arr[i];
        } 
    }
    cout<<"Largest NO :"<<l;
    

    return 0;
}