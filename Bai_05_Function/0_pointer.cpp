#include <stdio.h>

int main()
{
    int x = 5;
    int *p = &x;

    printf("*p = %d\n", *p);
    printf("x = %d\n", x);
    printf("p = %d\n", p);
    printf("&x = %d\n", &x);
    printf("&p = %d\n", &p);

    (*p)++; //*p++    ->*(p++)
    printf("x = %d\n", x);
    x++;
    printf("*p = %d\n", *p);
    return 0;
}