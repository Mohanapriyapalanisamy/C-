#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char choice;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter Any Arithmetic operation(+,-,*,/,%): ";
    cin>>choice;
    switch(choice)
    {
        case '+':cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b;
                 break;
        case '-':cout<<"The difference of "<<a<<" and "<<b<<" is "<<a-b;
                 break;
        case '*':cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<a*b;
                 break;
        case '/':cout<<"The division of "<<a<<" and "<<b<<" is "<<a/b;
                 break;
        case '%':cout<<"The modulus of "<<a<<" and "<<b<<" is "<<a%b;
                 break;
        default:cout<<"Please enter a valid arithmetic operator";

    }
    return 0;
}
