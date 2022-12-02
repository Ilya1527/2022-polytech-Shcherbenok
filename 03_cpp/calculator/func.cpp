#include <iostream>


using namespace std;


void result(float a, char c, float b)
{
    switch (c)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '^':
        cout << pow(a, b) << endl;
        break;
    }
}