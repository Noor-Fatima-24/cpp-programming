// Q6: Simple Calculator using switch-case (add, subtract, multiply, divide)
#include<iostream>
using namespace std;

int main()
{
    double a,b;
    char sym;
    cout<<"Enter two number : ";
    cin>>a>>b;

    cout<<"Enter symbol : + or - or * or / :";
    cin>>sym;

    switch (sym)
    {
    case '+':
        cout<<"Sum = "<<a+b;
        break;

        case '-':
        cout<<"Min = "<<a-b;
        break;

        case '*':
        cout<<"Mul = "<<a*b;
        break;

        case '/':
        cout<<"Div = "<<a/b;
        break;
    
    default:
        break;
    }

    return 0;
}