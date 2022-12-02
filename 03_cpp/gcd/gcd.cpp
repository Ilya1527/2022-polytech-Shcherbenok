#include <cassert>
#include "func.h"
#include <iostream>


using namespace std;


int main()
{
    assert(gcd(0, 5) == 5);
    assert(gcd(9, 0) == 9);
    assert(gcd(48, 64) == 16);
    assert(gcd(-64, 48) == 16);
    assert(gcd(30, 18) == 6);
    assert(gcd(-30, -18) == 6);
    assert(gcd(270, 192) == 6);
    cout << "Success!" << endl;
    return 0;
}