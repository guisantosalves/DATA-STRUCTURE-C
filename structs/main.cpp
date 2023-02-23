#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle
{
    int length;  // 4 bytes - 32 bits
    int breadth; // 4 bytes - 32 bits

    // 1 byte - 8 bits - allocate 4 bytes
    char x; // but use onlye one
};

int main()
{
    struct Rectangle r1 = {10, 5};
    r1.length = 15;
    r1.breadth = 20;
    

    cout << r1.length << endl;
    cout << r1.breadth << endl;


    return 0;
};