#include <random>
#include <iostream>


using namespace std;


void fill_array_random(int arr[], int n, int a, int b) 
{
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist(a, b);

    for (int i = 0; i < n; ++i) 
    {
        arr[i] = dist(rng);
    }
}


void print_array(int arr[], int n, bool show_index = false) 
{
    cout << "{";
    if (show_index == true) 
    {
        for (int k = 0; k < n; k++) 
        {
            if (k != n - 1) 
                cout << k << ": " << arr[k] << ", ";
            else 
                cout << k << ": " << arr[k];
        }
    }
    else 
    {
        for (int k = 0; k < n; k++) 
        {
            if (k != n - 1) 
                cout << arr[k] << ", ";
            else 
                cout << arr[k];
        }
    }
    cout << "}" << endl;
}


int main() 
{
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);
    fill_array_random(arr, n, 0, 100);
    print_array(arr, n);

    return 0;
}