#include <stdio.h>
#define pi 3.14159265359

double DienTich(double radius)
{
    return pi * radius * radius;
}

int main()
{
    double r;

    printf("Nhap ban kinh:\n");
    scanf("%lf", &r);

    printf("Dien tich hinh tron ban kinh %.2lf la: %.2lf", r, DienTich(r));

    return 0;
}