// booleans
// C++ has a bool data type, which can take the values true (1) or false (0).
#include<iostream>
using namespace std;
int main()
{
    bool a , b ;
    cout << "enter 1 for true and 0 for false" << endl;
    cout<< boolalpha ;
    cout <<"are u a coder ?" << endl;
    cin >> a ;
    cout << "are u a coder ? ans = " << a << endl;
    cout << "do u like cpp ? " << endl ;
    cin >> b ;
    cout << "do u like cpp ? ans = " << b << endl;
    return 0 ;
}
// boolalpha only works with output to convert 1 and 0 into ture and false BUT no affect on inputs !!