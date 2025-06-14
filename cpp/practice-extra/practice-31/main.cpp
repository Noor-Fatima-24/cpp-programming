// Q14: Linear search – take 10 numbers and search if a number is present or not.
#include<iostream>
using namespace std;

int main() 
{
     int arr[10],n;
    cout<<"Enter 10 numbers in array : ";
    
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a number to search : ";
    cin>>n;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]== n)
        {
            cout<<n<<" is found at position : "<<i;
            break;
        } 
    }
    if (arr[10] =! n)
    {
            cout<<n<<" is not present in the array ";
        }
    return 0;
}