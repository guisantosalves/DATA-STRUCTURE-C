#include <stdio.h>

// if I set the func call under the statement it will only execute
// when the func is opening in the stack recursion

// if I set the func call above the statement it will only execute
// when the func is coming back through the stack in the stack recursion

// Always when a recursive function has return and call itself
// it will follow the rule that will execute after all the
// stack recursion is opened. (De baixo pra cima).


int j = 0; 

int fun(int n)
{
    static int x = 0; // static does not create a copy in every stack in recursion
    if (n > 0)
    {
        x++;
        j++;
        return fun(n - 1) + j; // come back through the stack calculating with the incremented value
    }
}

int main()
{
    int x = 6;
    printf("%d", fun(x));
    return 0;
}