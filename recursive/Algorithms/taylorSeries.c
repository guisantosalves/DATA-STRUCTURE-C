#include <stdio.h>

// returning time o(N²)
double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
    {
        return 1;
    }
    r = e(x, n - 1);
    p = p * x; // pow
    f = f * n; // factorial
    printf("%f", r);
    return r + p / f;
}

// calling time using O(N)
// taylor series with honer's rule
double eTwo(int x, int n)
{
    static double s = 1;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return eTwo(x, n - 1);
}

int main()
{
    int x = 5, n = 2;

    printf("%f\n", eTwo(x, n));
    return 0;
}