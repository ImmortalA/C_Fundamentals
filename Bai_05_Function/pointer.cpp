#include <stdio.h>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5;
    int b = 10;
    int *p = &a;

    (*p)++;

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);
    printf("p = %d, &a = %d\n", p, &a);

    // swap(a, b);

    // printf("a = %d\n", a);
    // printf("b = %d\n", b);

    return 0;
}