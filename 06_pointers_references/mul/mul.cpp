#include <cassert>
#include <string>
#include "mul.h"


using namespace std;


const char arr[] = "0123456789";


int str_to_int(const char* input) // str to int
{ 
    int res = 0;
    for (int k = 0; k < strlen(input); k++) 
    {
        for (int x = 0; x < 10; x++) 
        {
            if (input[k] == arr[x]) 
            {
                res *= 10;
                res += x;
            }
        }
    }
    if (input[0] == '-')
        res *= -1; // if < 0

    return res;
}


const char* int_to_str(int input) // int to str
{
    int arrn[10] = { 0,1,2,3,4,5,6,7,8,9 }; 
    int i = 1;
    int b = input;
    while (b / 10 != 0) 
    {
        b /= 10;
        i++;
    }
    char *result = new char[i + 2];
    b = input;
    if (input >= 0) // if >= 0
    { 
        for (int k = i - 1; k > -1; k--) 
        {
            for (int z = 0; z < 10; z++) 
            {
                if ((input % 10) == arrn[z]) 
                {
                    result[k] = arr[z];
                    break;
                }
            }
            input /= 10;
            result[i] = '\0';
        }
    }
    else // if < 0 
    { 
        input = b;
        result[0] = '-';
        input *= (-1);
        for (int k = 1; k < i + 1; k++) 
        {
            for (int z = 0; z < 10; z++) 
            {
                if ((input % 10) == arrn[z]) 
                {
                    result[i - k + 1] = arr[z];
                    break;
                }
            }
            input /= 10;
        }
        result[i + 1] = '\0';
    }  
    
    return result;
}


int pre_mul(const char* a, const char* b) // result in int
{
    int res = str_to_int(a) * str_to_int(b);

    return res;
}


const char* mul(const char* a, const char* b) // result in str
{ 
    
    return int_to_str(pre_mul(a, b));
}