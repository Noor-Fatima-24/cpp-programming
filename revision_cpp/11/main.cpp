#include <iostream>
using namespace std;

int main() {

    string a = "Apple";
    string b = "Banana";

    int result = a.compare(b);
    cout << result;
     //Using Index Range Comparison
     
        string st1 = "Programming";
        string st2 = "Program";

        cout << endl << st1.compare(0,7,st2) << endl ;

     /*Alternative Way (Using Operators)
     string s1="20";
     string s2="70";
     if (s1 == s2) cout << "Equal";
     if (s1 < s2)  cout << "s1 is smaller";
     if (s1 > s2)  cout << "s1 is greater";

     //1️⃣ Modify a Character (Using Index)
     string name = "John";
     name[0] = 'M';
     cout << name; // output = Mohn

     //2️⃣ Add Text (Using append())
     string s = "Hello";
     s.append(" World");
     cout << s; // output = Hello World

     //3️⃣ Add Text (Using += operator)
     string s = "I love ";
     s += "C++";
     cout << s; // I love C++

     //4️⃣ Insert Text at a Specific Position
     string s = "I C++";
     s.insert(2, "love ");
     cout << s; // I love C++

     //5️⃣ Remove Part of a String (erase())
     string s = "Hello World";
     s.erase(5, 6);
     cout << s; // Hello

     //6️⃣ Replace Part of a String (replace())
     string s = "I like Java";
     s.replace(7, 4, "C++");
     cout << s; // I like C++

     //7️⃣ Clear Entire String
     string s = "Temporary text";
     s.clear();
     cout << s; // ( empty )


*/




    return 0;
}






