#include <stdio.h>

int triTuyetDoi(int x)
{
    if (x < 0)
        return -x;
    return x;
}

double luyThua(double x, int p)
{
    double pow = x; //power = x^p
    if (p == 0)
        return 1;
    for (int i = 1; i < triTuyetDoi(p); i++)
    {
        pow *= x;
        printf("pow = %lf\n", pow);
    }

    if (p < 0)
        return (1 / pow);
    return pow;
}

int main()
{
    double ans = luyThua(3, 4);
    printf("\nAns = %lf", ans);
    return 0;
}