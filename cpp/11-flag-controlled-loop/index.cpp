//Name verification program :)
#include <iostream>
using namespace std;

int main() {
    string name,correct;
    correct="noor";
    cout<<"hello!"<<endl<<" lets start the verification :) ";
    bool flag = true;
    while (flag)
    {
       cout<<endl<<"Enter your name:";
       cin>>name;
       if (name == correct)
       {
         flag = false;
         cout<<"you are Verified!";
       }
       else
       {
        cout<<"you are not verified,enter the correct name!";
       }

       
    }
    


    return 0;
}
