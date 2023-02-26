#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return sum(n - 1) + n;
}

int main()
{
    const int x = 5;
    int retunedVal = sum(5); // 1 2 3 4 5
    printf("%d", retunedVal);
    return 0;
}