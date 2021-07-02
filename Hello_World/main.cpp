#include <stdio.h>

int main()
{
    int a, b;

    printf("Nhap so nguyen a va b\n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Tong: %d\n", a + b);
    printf("Hieu: %d\n", a - b);
    printf("Tich: %d\n", a * b);
    printf("Thuong: %d\n", a / b);

    return 0;
}

// Nhap so nguyen a va b:
// 30
// 6
// Tong: 36
// Hieu: 24
// Tich: 180
// Thuong: 5