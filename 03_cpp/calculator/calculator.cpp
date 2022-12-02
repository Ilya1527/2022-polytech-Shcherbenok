#include <iostream>
#include "func.h"


using namespace std;


int main()
{
    cout << "Enter an expression\n";
    while (true)
    {
        float a = 0;
        float b = 0;
        char sign;
        cin >> a >> sign >> b;
        cout << "Answer: " << endl;
        result(a, sign, b);
        cout << "Enter an expression" << endl;
    }
    return 0;
}