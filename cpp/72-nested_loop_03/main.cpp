/* Inverted Pyramid Pattern

* * * * *
* * * *
* * *
* *
*

*/

#include<iostream>
using namespace std;

int main()
{
    for (int i = 5; i > 0; i--)
    {
        for (int p = 0; p < i ; p++)
        {
            cout << " *";
        }
        cout<<endl;
    }
    
    return 0;
}