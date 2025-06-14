// Q13: Take 10 elements in an array and count how many are even.
#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    cout<<"Enter 10 numbers in array : ";
   
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
        
        
    }
     cout<<"Even numbers are : ";

    for (int i = 0; i < 10; i++)
    {
         if (arr[i] % 2 == 0)
        {
           
            cout<<arr[i]<<endl;
        }
       
        
    }
    
    return 0;
}