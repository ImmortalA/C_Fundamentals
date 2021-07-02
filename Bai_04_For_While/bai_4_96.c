#include <stdio.h>

int main()
{
    int n;

    printf("Nhap so:\n");
    scanf("%d", &n);
    
    int temp = n, sum = 0;

    while (n != 0)
    {
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    if (temp == sum)
        printf("La so doi xung");
    else
        printf("Khong phai so doi xung");

    return 0;
}