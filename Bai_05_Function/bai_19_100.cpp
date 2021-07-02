#include <stdio.h>
#include <stdlib.h>

int ucln(int a, int b)
{
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    while (a != 0 && b != 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }

    if (a != 0)
        return a;
    else if (b != 0)
        return b;
}

void RutGon(int *ts, int *ms)
{
    int u = ucln(*ts, *ms);
    *ts /= u;
    *ms /= u;

    if (*ms < 0)
    {
        *ms *= -1;
        *ts *= -1;
    }
}

void inPhanSo(int ts, int ms)
{
    if (ms == 1)
        printf("\n%d", ts);
    else
        printf("\n%d/%d", ts, ms);
}

int main()
{
    int ts, ms;

    printf("Nhap tu so:\n");
    scanf("%d", &ts);
    printf("Nhap mau so:\n");
    scanf("%d", &ms);

    if (ms == 0)
    {
        printf("Mau so phai khac 0");
        return 0;
    }

    RutGon(&ts, &ms);
    inPhanSo(ts, ms);

    return 0;
}
