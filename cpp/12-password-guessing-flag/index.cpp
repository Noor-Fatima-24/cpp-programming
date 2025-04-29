#include<iostream>
using namespace std;

int main()
{
    string password="1234",input;
    
    bool flag=true;
    cout<<endl<<"HELLO!"<<endl;;
    

    while (flag)
    {
       cout<<" plz enter the password:";
       cin>>input;
       if (input == password)
       {
        flag=false;
        cout<<"correct password !";
       }
       else
       {
        cout<<"Incorrect password try again"<<endl;
       }
       
    }
    



    return 0;
}