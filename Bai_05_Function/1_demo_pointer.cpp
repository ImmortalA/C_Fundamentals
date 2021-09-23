#include <stdio.h>

int func(int *x)
{
    (*x)++;
    return *x;
}

int main()
{
    int a = 1;

    printf("Before: %d\n", a);
    func(&a);
    printf("After: %d\n", a);

    return 0;
}

// void func(int &a, int b, int *c)
// {
//     a++;
//     b++;
//     (*c)++;
// }

// int main()
// {
//     int a = 1, b = 2, c = 3;

//     printf("Before: a = %d, b = %d, c = %d\n", a, b, c);
//     func(a, b, &c);
//     printf("After: a = %d, b = %d, c = %d\n", a, b, c);

//     return 0;
// }