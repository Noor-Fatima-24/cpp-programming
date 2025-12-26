// logical operators!
#include<iostream>
using namespace std;

int main()
{
    int a , b ;
    a = 2;
    b = 4;

/*
(a > b) = F
(b > a) =T
*/

    // AND
cout << endl << "\n(a > b) && (b < a) gives: "
        << ((a > b) && (b > a))
<< "  (AND → true only if both are true)" << endl;  

    // OR
cout << endl << "\n(a > b) || (b < a) gives: "
        << ((a > b) || (b > a))
<< "  (OR → true if any one is true)" << endl;

    // NOT
cout << endl << "\n!((a > b) && (b < a)) gives: "
        << (!((a > b) && (b > a)))
<< "  (NOT → reverses false to true )" << endl;

    return 0;
}

cout << !(a>b) ;
