#include <cassert>
#include <iostream>


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


bool palindrome(const char* input) 
{
    if (input == nullptr) 
        return false;
    else 
    {
        if (length(input) % 2 == 0) 
        {
            int a = length(input);
            for (int i = 0; i < (a / 2); i++) 
            {
                if (input[a / 2 - 1 - i] == input[a / 2 + i]) 
                    continue;
                else 
                    return false;
            }

            return true;
        }
        else 
        {
            int a = length(input);
            for (int i = 0; i < (a / 2); i++) 
            {
                if (input[a / 2 - i] == input[a / 2 + i]) 
                    continue;
                else 
                    return false;
            }

            return true;
        }
    }
}


int main()
{
    assert(palindrome("tet") == true);
    assert(palindrome("test") == false);
    assert(palindrome("") == true);
    assert(palindrome("lool") == true);
    assert(palindrome("loollool") == true);
    assert(palindrome("1005001") == true);
    assert(palindrome("dad") == true);
    assert(palindrome(nullptr) == false);
    assert(palindrome("wasitacaroracatisaw") == true);
    assert(palindrome("pullupifipullup") == true);
    cout << "Success!\n";

    return 0;
}