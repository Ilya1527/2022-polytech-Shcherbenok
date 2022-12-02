

int* insert(int arr[], int n, int x, int p)
{
    for (int i = n; i > p; i--) arr[i] = arr[i - 1];
    arr[p] = x;

    return arr;
}


int search_position(int arr[], int n, int x)
{
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] >= x) return i;
    }

    return n;
}


int* insert_sorted(int arr[], int n, int x)
{
    int p = search_position(arr, n, x);

    return insert(arr, n, x, p);
}