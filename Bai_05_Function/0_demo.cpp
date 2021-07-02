#include <stdio.h>


int plus(int &x)
{
    (x)++;
    return x;
}

int main()
{
    int a = 5;
    int *x = &a;

    printf("Truoc: %d\n", a);
    plus(a);
    printf("Sau: %d\n", a);

    return 0;
}

//global
//local