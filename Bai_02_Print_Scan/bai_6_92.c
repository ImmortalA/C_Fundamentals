#include <stdio.h>

int main()
{
    double do_F, do_C;

    printf("Nhap do F:\n");
    scanf("%lf", &do_F);

    do_C = 1.0 * 5 / 9 * (do_F - 32);

    printf("%.2lf do F = %.2lf do C", do_F, do_C);

    return 0;
}