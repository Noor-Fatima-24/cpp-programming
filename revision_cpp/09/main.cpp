//string

#include<iostream>
using namespace std;

int main()
{

    string sample = "Hello GCB";
    cout<< sample <<endl;// output = Hello GCB

    //String Concatenation
    string firstword = "Noor";
    string lastword = "Fatima";
    string fullword = firstword + lastword;
    cout << fullword << endl;
    string fullwordspace = firstword +"  "+ lastword;
    cout << fullwordspace <<endl;

    //append() function
    string firstWord = "Noor ";
    string lastWord = " Fatima";
    string fullWord = firstWord.append( lastWord ) ;
    cout << fullWord <<endl ;

    //Length of string
    string a ;
    cin >> a;
    cout << a.length();

    return 0;
}