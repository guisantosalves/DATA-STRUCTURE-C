#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

int BinarySearch(struct Array arr, int key)
{
    int low, mid, high;
    low = 0;               // smaller position
    high = arr.length - 1; // position max

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            high = mid - 1; // set the high
        else
            low = mid + 1;
    }

    return -1;
}

int RBinSearch(int arr[], int low, int high, int key)
{
    int mid;

    if (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
            return mid;
        else if (key < arr[mid])
            return RBinSearch(arr, low, mid - 1, key);
        else
            return RBinSearch(arr, mid + 1, high, key);
    }

    return -1;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    printf("%d\n", RBinSearch(arr.A, 0, arr.length - 1, 2));

    return 0;
}