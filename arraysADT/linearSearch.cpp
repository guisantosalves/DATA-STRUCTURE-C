#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    printf("\nAll the elements are: \n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d", arr.A[i]);
    }
};

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    // ps: the x that is the key which I want
    // will be replaced to index 0
};

// when it is a pointer I can use '->'
int LinearSearch(struct Array *arr, int key)
{
    // go through the array and compare
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
};

// linear -> one by one
int main()
{
    // 10 is for size and 8 is for length
    struct Array myCurrentArr =
    {
        {2, 23, 14, 5, 6, 9, 8, 12},
        10,
        8
    };

    // first display
    Display(myCurrentArr);

    int gettingValueFromLS = LinearSearch(&myCurrentArr, 14);
    
    // second display
    Display(myCurrentArr);
    return 0;
}