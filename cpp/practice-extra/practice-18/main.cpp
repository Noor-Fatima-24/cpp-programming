// Q4: Take three numbers and find the largest one.
#include<iostream>
using namespace std;

int main()
{
    cout<<"Hello :)"<<endl;
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
     
   
    if (b>a)
    {
        if (c<b)
        {
            cout<<"max is "<<b;
        }
        else{
            cout<<"max is "<<c;
        }
    }
    else if (c>a)
    {
        cout<<"max is "<<c;
    }
    else{
        cout<<"max is "<<a;
    }
    
    

    return 0;
}