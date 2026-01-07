//Problem: Check grade based on marks with Ternary Operator
#include <iostream>
using namespace std;

int main() {
    int marks = 45;

    string grade = (marks >= 90) ? "Grade A" :
                   (marks >= 70) ? "Grade B" :
                                   "Grade C";

    
    return 0;
}
