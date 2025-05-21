
/*

🔢 3: Find the sum of all elements in an array
  using loops.

*/
#include<iostream>
using namespace std;

int main()
{
    int arr[3],sum=0;
    cout<<"enter three numbers to sum up : "<<endl;

    for (int i = 1; i < 4; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    
    cout<<" sum = "<<sum;

    return 0;
}