#include <stdio.h>

int left_shift(int A[])
{
    int element = A[0];

    for (int i = 0; i < 5; i++)
        A[i] = A[i + 1];

    for (int i = 0; i < 5; i++)
        printf("%d ", A[i]);

    return element;    
}

int main()
{
    int A[20] = {10, 100, 200, 44, 1};

    left_shift(A);

    return 0;
}