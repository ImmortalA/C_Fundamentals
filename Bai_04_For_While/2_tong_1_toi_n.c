#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Nhap n:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += i;

    printf("Tong = %d", sum);
    
    return 0;
}