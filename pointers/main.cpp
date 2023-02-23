#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int b[5] = {2,
                4,
                5,
                6,
                6};
    int *p2;
    p2 = b; // dont need &
    int a = 10;
    int *p;

    for (int i = 0; i < 5; i++)
    {
        cout << p2[i] << endl;
    }

    p = &a; // receive the memory addres of a

    cout << a << endl;

    // I am passing the memory address which the p is referencing
    printf("using pointer: %d", *p);

    cout << endl;

    // show the same memory address
    printf("using pointer: %d %d", p, &a);

    cout << endl;

    // using C
    int *exemple;
    exemple = (int *)malloc(5 * sizeof(int)); // creating array 5 places in heap
    exemple[0] = 10;
    exemple[1] = 20;

    for (int k = 0; k < 5; k++)
    {
        cout << exemple[k] << endl;
    }

    free(exemple); // deleting the memory 

    // pointer has a different byte from its data type;
    return 0;
}