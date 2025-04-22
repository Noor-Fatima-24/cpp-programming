#include<iostream>
using namespace std;

int main()
{
    int noor[6],n,loc,size=6;

    for (int i = 0; i < 5; i++)
    {
        cout<<"enter value";
        cin>>noor[i];
    }
    cout<<"enter index or location where to add a new number";
    cin>>loc;
    cout<<"enter value to add:";
    cin>>n;

    if (loc < 0 || loc > size)
    {
        cout<<"Invaild location or index"<<endl;
    }

    for (int i = size; i > loc; i--)
    {
        noor[i] = noor[i - 1];// one step back in array
    }
    noor[loc] = n;
     
    cout << "Updated array: ";
    for (int i = 0; i < size; i++) 
    {
        cout << noor[i] << " ";
    }
    cout << endl;
    return 0;
}