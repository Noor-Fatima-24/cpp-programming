/* Number Triangle Pattern

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int p = 1; p <= i; p++)
        {
            cout << p;
        }
        cout<<endl;
    }
    
    return 0;
}
