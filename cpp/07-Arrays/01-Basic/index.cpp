#include<iostream>
using namespace std;

int main()
{
    int basic[5],sum=0;
    
    for(int i=0 ; i < 5 ; i++)
    {
      cout<<"enter values";
      cin>>basic[i];
      if (basic[i]%2 == 0)
      {
        cout<<basic[i];
        sum = sum + basic[i];
      }
      cout<<"sum = "<<sum;
    }
   

    return 0;
}