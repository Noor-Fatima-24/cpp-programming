/*
06:
    Print a Pyramid Pattern
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
*/

    #include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++)
    {
        for (int s = 0; s < 5-i; s++)
        {
            cout<<" ";
        }
        for (int j = 0; j < 2*i - 1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}

 
