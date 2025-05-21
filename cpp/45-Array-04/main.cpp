/*

📈 3. Find the maximum and minimum element in an array
    Input: [4, 7, 1, 9], Output: Max = 9, Min = 1

*/
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {4,7,1,9};
    if ( arr[0] > arr[1] )
    {
        if ( arr[0] > arr[2] )
        {
                if ( arr[0] > arr[3] )
              {
                 cout<<" Max = "<<arr[0];
              }
               else
               {
                cout<<" Max = "<<arr[3];
               }
        }
        else if ( arr[2] > arr[3] )
        {
            cout<<" Max = "<<arr[2];
        }
        else
               {
                cout<<" Max = "<<arr[3];
               }
    }
    else if ( arr[1] > arr[2] )
    {
           if ( arr[1] > arr[3] )
            {
              cout<<" Max = "<<arr[1];
            }
            else 
            {
              cout<<" Max = "<<arr[3];
            }
    }
    
    else if ( arr[2] > arr[3] )
    {
            
              cout<<" Max = "<<arr[2];
    }
            else 
            {
              cout<<" Max = "<<arr[3];
            }
    // second mehtod 
     int min = arr[0];

if (arr[1] < min)
    min = arr[1];
if (arr[2] < min)
    min = arr[2];
if (arr[3] < min)
    min = arr[3];

cout << ", Min = " << min;

      
    
    
    
    
    return 0;
}