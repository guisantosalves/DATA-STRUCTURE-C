#include <stdio.h>

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    // execute in return time
    return fact(n - 1) * n;
}

// f5 -> f(4)*5 -> f(3) * 4 -> f(2) * 3.... and execute in return time

int main()
{
    int x = 5;
    printf("%d", fact(5));
    return 0;
}