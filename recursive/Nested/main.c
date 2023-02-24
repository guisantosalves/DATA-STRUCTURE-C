#include <stdio.h>

int fun(int n)
{
    if (n > 100)
        return n - 10;
    return fun(fun(n + 11)); // execute the inside firstly and returns
}

int main()
{
    int x = 95;
    printf("%d", fun(x));
    return 0;
}
