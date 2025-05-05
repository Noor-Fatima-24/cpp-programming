#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            cout<<"outer"<<i<<"inner"<<j<<endl;
        }
        
    }
    
    
    return 0;
}