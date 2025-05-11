/*

A
AB
ABC
ABCD

*/
#include<iostream>
using namespace std;

int main()
{
    for(char i = 'A'; i <= 'D'; i++) {
        for(char j = 'A'; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    
    return 0;
}