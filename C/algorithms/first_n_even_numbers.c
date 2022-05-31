#include <stdio.h>

void first_n_even(int n)
{
    static int num = 2;

    if (n == 0)
    {
        return;
    }
    else
    {
        printf("%d ", num);
        num += 2;
        return first_n_even(n - 1);
    }
}

int main()
{
    first_n_even(5);

    return 0;
}