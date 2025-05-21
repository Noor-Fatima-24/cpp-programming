/*

🔁 Reverse the elements of an array
 Input: [1, 2, 3, 4], Output: [4, 3, 2, 1]

*/
#include<iostream>
using namespace std;

int main()
{
    int arr[4]={1,2,3,4};

 cout<<"output = ";

   for (int i = 3; i >= 0; i--)
   {
     
     cout<<arr[ i ] << " ";
     
   }

    return 0;
}