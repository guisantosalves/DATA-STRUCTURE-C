#include <stdio.h>

int poww(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return poww(m, n - 1) * m;
}

// fun(2, 4) * 2, fun(2, 3) * 2, fun(2, 2) * 2.... fun(2, 0) * 2 = 2*1 return and make the times

int main()
{
    int m = 2;
    int n = 6;

    printf("%d", poww(m, n));
}