//Access characters in string 

#include <iostream>
using namespace std;

int main() {
    string word = "Hello";

    // Using Index ([]) operator
    cout << word[0];   // Output: H
    cout << word[1];   // Output: e

    // Using .at() function (safer method)
    cout << word.at(2);  // Output: l
    cout << word.at(3);  // Output: l

    //bound checking 
    cout << word[-1];  
    cout << word.at(-1);  // shows error 
    
    


    return 0;
}







