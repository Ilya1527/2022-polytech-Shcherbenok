#include <iostream>
#include "search.h"


using namespace std;


int main()
{
    int mas[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
    const int arrsize = sizeof(mas) / sizeof(mas[0]);
    cout << "Item ID: " << search(mas, 0, arrsize, 15) << endl;
    return 0;
}