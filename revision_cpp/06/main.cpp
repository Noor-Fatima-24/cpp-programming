#include <iostream>
using namespace std;

int main() {

    // Using lowercase 'f' to denote float literal
    float a = 5.75f;

    // Using uppercase 'F' to denote float literal
    float b = 5.75F;

    // Without 'f' → becomes double by default
    double c = 7.89;

    cout << "Value of a (5.75f): " << a << endl;
    cout << "Value of b (5.75F): " << b << endl;
    cout << "Value of c (7.89 - double): " << c << endl;

    return 0;
}
