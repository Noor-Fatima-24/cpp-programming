// Q15: Take n numbers in array, print all numbers, then their sum, then average.
#include<iostream>
using namespace std;

int main()
{
    float avg;
    int n,sum=0;
    cout<<"Enter how many numbers u want to enter in the array : ";
    cin>>n;
     int arr[n];
    cout<<"Enter "<<n<<" numbers in array : ";
   
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
      
         
          sum = sum + arr[i]; 
            
    }
cout<<"Numbers in array : ";
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<endl;  
}
 
    cout<<"sum = "<<sum<<endl;
    avg = sum / n;
    cout<<"avg = "<<avg;


    return 0;
}