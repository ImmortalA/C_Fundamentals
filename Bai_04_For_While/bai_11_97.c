#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Nhap n:\n");
    scanf("%d", &n);

    while (i * i <= n)
    {
        printf("%d ", i * i);
        i++;
    }
}