#include <stdio.h>

int main()
{
    int a, b;
    printf("Nhap a, b:\n");
    scanf("%d %d", &a, &b);

    while (a != 0 && b != 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    if (a != 0)
        printf("UCLN: %d", a);
    else if (b != 0)
        printf("UCLN: %d", b);
    return 0;
}