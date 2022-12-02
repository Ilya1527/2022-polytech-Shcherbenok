#include <cassert>
#include "insearch.h"


int main()
{
    int arr[] = { 1, 3, 7, 9 };
    int expres[] = { 1, 3, 5, 7, 9 };

    auto res = insert(arr, 4, 5, 2); // Insert func example
    for (int i = 0; i < 5; i++) assert(res[i] == expres[i]);

    assert(search_position(arr, 4, 10) == 4); // Search_position func example 1

    assert(search_position(expres, 5, 7) == 3); // Search_position func example 2

    int arr2[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int expres2[] = { 0, 1, 2, 3, 4, 5, 5, 6, 7, 8, 9 };

    auto res2 = insert_sorted(arr2, 10, 5); // Insert_sorted func example
    for (auto i = 0; i < 11; i++) assert(res2[i] == expres2[i]);

    return 0;
}
