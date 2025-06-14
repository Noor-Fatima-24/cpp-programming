// Q3: Take a number and check whether it is even or odd.
#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cout<<"Hello :)"<<endl;
    cout<<"Enter a number : ";
    cin>>n;

    if ( n % 2 == 0 )
    {
        cout<<n<<" is even number :)"<<endl;
    }
    else
    {
       cout<<n<<" is odd number :)"<<endl; 
    }
    
    return 0;
}