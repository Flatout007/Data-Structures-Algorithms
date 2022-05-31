#include <stdio.h>
#include <stdlib.h>
const int n = 100;

struct Array
{
    int *A;
    int size;
    int length;
};

void display(int *A, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
}

void append(struct Array *arr, int value)
{
    int *A = arr->A;

    A[arr->length] = value;
    arr->length++;
}

void insert(struct Array *arr, int index, int value)
{
    int *A = arr->A, i = 0;

    if (index > arr->length)
    {
        printf("index out of range\n");
        return;
    }

    for (i = arr->length; i > index; i--)
        A[i] = A[i - 1];

    A[i] = value;

    arr->length++;
}

int delete(struct Array *arr, int index)
{   
    int *A = arr->A;
    int element = A[index];

    for(int i = index; i<arr->length-1; i++)
        A[i] = A[i+1];

    arr->length--;

    return element;    
}

int search(struct Array arr, int key) 
{
    int *A = arr.A;

    for(int i = 0; i<arr.length; i++)
    {
        if(A[i] == key)
            return i;    
    }

    return -1;
}

int get(int *A, int index)
{
    if(index >= 0 && index < n)
        return A[index];

    return -1;      
}

void set(int *A, int index, int value, int n)
{
    if(index >= 0 && index < n)
        A[index] = value;

    display(A, n);    
}

int main()
{
    struct Array arr;
    int count = 0;

    arr.size = n;
    arr.A = malloc(arr.size * sizeof(int));
    arr.length = 0;

    int *A = arr.A;
    for (int i = 0; i <= 5; i++)
        A[i] = ++count;
    arr.length = 5;

    append(&arr, 5);
    insert(&arr, 6, 100);
    display(A, arr.length);
    printf("\n");
    set(A, 2, 100, arr.length);

    return 0;
}