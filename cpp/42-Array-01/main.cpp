/*

🔢 1. Print all elements of an array

 Input: 5 elements, Output: print them all
 without loop.
 
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    cout<<"enter five numbers : ";
    //taking input
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
    cin>>arr[3];
    cin>>arr[4];
    // displaying output
    cout<<arr[0]<<" ";
    cout<<arr[1]<<" ";
    cout<<arr[2]<<" ";
    cout<<arr[3]<<" ";
    cout<<arr[4]<<" ";
    return 0;
}