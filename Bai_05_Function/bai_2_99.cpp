#include <stdio.h>

int min(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}

int main()
{
    int x, y;
    printf("Nhap x, y:\n");
    scanf("%d %d", &x, &y);

    printf("Min %d va %d la: %d", x, y, min(x, y));

    return 0;
}