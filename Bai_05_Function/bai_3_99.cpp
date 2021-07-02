#include <stdio.h>

int min(int a, int b, int c)
{
    int minNum;
    if (a < b)
        minNum = a;
    else
        minNum = b;
    if (c < minNum)
        minNum = c;
    return minNum;
}

int main()
{
    int x, y, z;
    printf("Nhap x, y, z:\n");
    scanf("%d %d %d", &x, &y, &z);

    printf("Min %d, %d va %d la: %d", x, y, z, min(x, y, z));

    return 0;
}