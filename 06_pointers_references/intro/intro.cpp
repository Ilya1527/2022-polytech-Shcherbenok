#include <cassert>
#include <iostream>
#include <string>


using namespace std;


unsigned int length(const char* input) 
{
    if (input == nullptr) 
        return 0;
    else
    {
        int len = 0;
        while (*input++) len++;

        return len;
    }
}


int main() 
{
    assert(length("subscribe") == 9);
    assert(length("to") == 2);
    assert(length("") == 0);
    assert(length("my channel") == 10);
    assert(length("!") == 1);
    assert(length(nullptr) == 0);
    cout << "Success!\n";

    return 0;
}