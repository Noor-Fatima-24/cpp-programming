// #include<iostream>
// using namespace std;

// int sum(int arr[5],int n,int key,bool check=true)
// {
//      n=0;
//     for (int i = 0; i <= 4; i++)
//     {
//         if (arr[i]==key)
//         {
//             return i;
//             check=false;
//             break;
//         }
        
//     }
//     if (check==true)
//     {
//         cout<< "not in arrya";
//     }
    
//         return -1;
          
    
// }

// int main()
// {
//     int arr[5],n,key;
//     cout<<"E";

//     for (int i = 0; i <=4; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"key";
//     cin>>key;
//     cout<<sum(arr,n,key);
//     return 0;
// }
//pointers
// #include<iostream>
// using namespace std;

// int main()
// {
//      int a = 10;           // normal variable
//     int* p = &a;          // pointer p stores the address of a
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main() {
//     int x = 20;
//     int* ptr = &x;
//   cout<<"p"<<ptr<<endl;
//     *ptr = 50;  // change value of x using pointer
// cout<<"n"<<ptr;
//     cout << "New value of x: " << x;  // Output: 50
//     return 0;
// }
#include<iostream>
using namespace std;

int main()
{
    int arr[2][3]={2,3}{4,5,6}
    for (int i = 1; i <= 2; i++)
    {
        cout<<arr[i][i];
    }
    
    return 0;
}