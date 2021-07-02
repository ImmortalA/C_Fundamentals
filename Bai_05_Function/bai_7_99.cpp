#include <stdio.h>

int Nhuan(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int year;

    printf("Nhap nam:\n");
    scanf("%d", &year);

    if (Nhuan(year))
        printf("Nam nhuan");
    else
        printf("Nam khong nhuan");
}