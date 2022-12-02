int doublesearch(int arr[], int l, int n, int key) 
{
    if (n - 1 >= l) 
    {
        int mid = l + (n - 1 - l) / 2;
        if (arr[mid] == key) 
            return mid;
        if (arr[mid] > key) 
            return doublesearch(arr, l, mid - 1, key);
        return doublesearch(arr, mid + 1, n - 1, key);
    }
    return -1;
}