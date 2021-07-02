#include <stdio.h>

int main()
{
    double a, b;

    printf("Giai phuong trinh ax + b = 0\n");
    printf("Nhap a, b:\n");
    scanf("%lf %lf", &a, &b);

    if (a == 0)
    {
        if (b == 0)
            printf("Vo so nghiem");
        else
            printf("Vo nghiem");
    }
    else
        printf("x = %.2lf", -b / a);

    return 0;
}