#include <stdio.h>

int main()
{
    int x, y;

    printf("Nhap x, y\n");
    scanf("%d %d", &x, &y);

    printf("Tong = %d\n", x + y);
    printf("Hieu = %d\n", x - y);
    printf("Tich = %d\n", x * y);
    printf("Thuong = %.2lf\n", 1.0 * x / y);

    return 0;
}