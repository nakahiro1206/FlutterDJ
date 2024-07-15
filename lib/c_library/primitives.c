#include <stdarg.h>
#include "primitives.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("3 + 5 = %d\n", sum(3, 5));
    int *mult = multiply(3, 5);
    printf("3 * 5 = %d\n", *mult);
    free(mult);
    int sub_num = 3;
    printf("3 - 5 = %d\n", subtract(&sub_num, 5));
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int *multiply(int a, int b)
{
    // Allocates native memory in C.
    int *mult = (int *)malloc(sizeof(int));
    *mult = a * b;
    return mult;
}

void free_pointer(int *int_pointer)
{
    // Free native memory in C which was allocated in C.
    free(int_pointer);
}

int subtract(int *a, int b)
{
    return *a - b;
}