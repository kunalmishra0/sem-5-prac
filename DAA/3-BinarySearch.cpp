#include <iostream>
using namespace std;

int BinarySearch(int arr[], int l, int h, int x)
{
    if (l > h)
        return -1;
    int mid = (l + h) / 2;
    if (arr[mid] == x)
        return mid;
    else if (x < arr[mid])
    {
        return BinarySearch(arr, l, mid - 1, x);
    }
    return BinarySearch(arr, mid + 1, h, x);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int x = 5;
    cout << "Index of " << x << " " << BinarySearch(arr, 0, 6, x);
}