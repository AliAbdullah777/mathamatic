#include<iostream>
using namespace std;
int main ()
{
    char op;
    cout << "Enter One Operator : +, -, *, /";
    cin >> op;

    int num , num2;
    cout << "Enter Two Number";
    cin >> num >> num2;

    switch (op)
    {
    case '+':
        cout << "The Answer of " << num << " + " <<num2 << " = "<< num + num2<<endl; 
        break;

    case '-':
        cout << "The Answer of " << num << " - " <<num2 << " = "<< num + num2<<endl;
        break;

    case '*':
        cout << "The Answer of " << num << " * " <<num2 << " = "<< num + num2 <<endl; 
        break;

    case '/':  
        cout << "The Answer of " << num << " / " << num2 << " = "<< num + num2 <<endl; 
        break;


    default:
        cout << "THE ANSWER IS INVALID";
        break;
    }
}