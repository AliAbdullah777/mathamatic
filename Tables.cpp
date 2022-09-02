#include<iostream>
using namespace std;
int main () 
{
    int num;
    cout << "\tTABLE"<< endl;


    cout << "Enter Any Number  :  ";
    cin >> num;
    for (int i = 0; i <= 10; i++)
    {
        cout << num <<"*"<< i <<"="<< num * i << endl;    
    }

    return 0;
    
}