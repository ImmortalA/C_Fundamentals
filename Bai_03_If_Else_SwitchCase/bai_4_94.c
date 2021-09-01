#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    printf("GIAI PHUONG TRINH ax^2 + bx + c = 0\n");

    printf("Nhap a\n");
    scanf("%lf", &a);
    printf("Nhap b\n");
    scanf("%lf", &b);
    printf("Nhap c\n");
    scanf("%lf", &c);

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                printf("Vo so nghiem\n");
            else
                printf("Vo nghiem");
        }
        else
            printf("x = %.2lf\n", -c / b);
    }
    else
    {
        double d = b * b - 4 * a * c;

        if (d > 0)
        {
            printf("x1 = %.2lf\n", (-b - sqrt(d)) / (2 * a));
            printf("x2 = %.2lf\n", (-b + sqrt(d)) / (2 * a));
        }
        else if (d == 0)
        {
            printf("x1 = x2 = %.2lf\n", -b / (2 * a));
        }
        else
        {
            double r, i;
            r = -b / (2 * a);
            i = sqrt(-d) / (2 * a);

            printf("x1 = %.2lf + %.2lfi\n", r, -i);
            printf("x2 = %.2lf + %.2lfi\n", r, i);
        }
    }
    return 0;
}