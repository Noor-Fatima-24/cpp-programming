//Problem: Check grade based on marks
#include <iostream>
using namespace std;

int main() {
    int marks = 55;

    if (marks >= 90) {
        cout << "Grade A";
    }
    else if (marks >= 70) {
        cout << "Grade B";
    }
    else if(marks >= 60) {
        cout << "Grade C";
    }
    else {
        cout << "Grade D";
    }

    return 0;
}
