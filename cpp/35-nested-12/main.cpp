
/*

123
45
6 

*/

#include<iostream>
using namespace std;

int main()
{
    int c=1;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 4-i; j++)
        {
            cout<<c;
            c++;
        }
        cout<<endl;
    }
    
    return 0;
}
