// basic counter-control loop exanmple code

#include <iostream>
using namespace std;

int main() {
    int count = 1, sum = 0;

    while (count <= 5) {
        sum += count;  
        count++;       
        
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
