/*

   *   
  * *  
 *   * 
*******

*/
#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int s = 3; s >= i; s--)
        {
            cout<<" ";
        }
        
        for (int j = 1; j <= (2 * i - 1) ; j++)
        {
            if (j == 1 || j == (2 * i - 1) || i == 4)
                cout << "*";
            else
                cout << " ";
            
        }
        cout<<endl;
    }
    
    return 0;
}