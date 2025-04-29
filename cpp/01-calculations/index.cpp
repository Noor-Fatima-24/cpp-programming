// #include <iostream>
//     using namespace std;
    
//     int main() {
//         int n = 1;int a = 1; int b;
//         for (; a <= 100; a++)
//          {
//            b = n * 4;
//             cout << ".p-" <<a << " \n{\n";
//             cout << "    padding: " << b<< "px;\n";
//             cout << "}\n\n";
//             n++;
//         }
//         return 0;
//     }
// #include <iostream>
// using namespace std;

// int main() {
//     int p = 4;
//     for (int i = 1; i <= 100; i++) {
     
//         cout << ".p-" << i << " { " << "    padding: " << p << "px; "<< "}\n ";
        

//         p += 4;
//     }
    
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int p = 4;
    for (int i = 1; i <= 100; i++) {
     
        cout << ".fontsize-" << i << " { "<< "    font-size: " << p << "px; "<< "}\n ";
        

        p += 4;
    }
    
    return 0;
}