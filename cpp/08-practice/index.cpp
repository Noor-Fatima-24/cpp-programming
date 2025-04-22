#include<iostream>
using namespace std;

int main()
{
   for (int n = 0; n < 5; n++)
   {
    for (int i = 0; i < 5; i++)
    {
        cout<<"*";
    }
    cout<<endl;
   }
   
   
   
   int arr[5];

   cout << "Array elements: ";
   for (int i = 0; i < 5; i++) {
  
    cin>>arr[i];
       cout << arr[i] << " ";
   }
    
    return 0;
}