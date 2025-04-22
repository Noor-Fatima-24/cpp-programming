#include <iostream>
using namespace std;

int main() {
    
    int rows = 18;
    
   
    for (int i = 0; i < rows; i++) {
      
        for (int j = 0; j < 12; j++) {
            cout << "4";
        }

        
        for (int j = 0; j < i; j++) {
            cout <<" ";
        }

        
        for (int j = 0; j < 18 - i; j++) {
            cout << "*";
        }

    
        for (int j = 0; j < i; j++) {
            cout <<" ";
        }

     
        for (int j = 0; j < 8; j++) {
            cout << "1";
        }

        cout << endl;
    }

    return 0;
}
