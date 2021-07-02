#include <stdio.h>

int main()
{
    int x;

    printf("Nhap x:\n");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        printf("Day la so chan!");
    }
    else
    {
        printf("Day la so le!");
    }

    return 0;
}