#include <stdio.h>
#include <math.h>

struct PhanSo
{
    int tu;
    int mau;
};

int UCLN(int a, int b)
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
    return (a == 0 ? b : a);
}

void RutGon(PhanSo &a)
{
    int ucln = UCLN(a.tu, a.mau);
    a.tu /= ucln;
    a.mau /= ucln;
    if (a.mau < 0)
    {
        a.tu = -a.tu;
        a.mau = -a.mau;
    }
}

void NhapPhanSo(PhanSo &a)
{
    do
    {
        printf("Nhap phan so:\n");
        scanf("%d", &a.tu); // Neu kieu du lieu o tren la *a, scanf("%d", &a->tu);
        scanf("%d", &a.mau);
    } while (a.mau == 0);
}

void XuatPhS(PhanSo a)
{
    RutGon(a);
    if (a.mau == 1)
        printf("\n%d", a.tu);
    else
        printf("\n%d/%d", a.tu, a.mau);
}

PhanSo Cong(PhanSo a, PhanSo b)
{
    PhanSo result;
    result.tu = (a.tu * b.mau) + (b.tu * a.mau);
    result.mau = a.mau * b.mau;

    RutGon(result);

    return result;
}

PhanSo Tru(PhanSo a, PhanSo b)
{
    PhanSo result;
    result.tu = (a.tu * b.mau) - (b.tu * a.mau);
    result.mau = a.mau * b.mau;

    RutGon(result);

    return result;
}

PhanSo Nhan(PhanSo a, PhanSo b)
{
    PhanSo result;
    result.tu = a.tu * b.tu;
    result.mau = a.mau * b.mau;

    RutGon(result);

    return result;
}

PhanSo Chia(PhanSo a, PhanSo b)
{
    PhanSo result;
    result.tu = a.tu * b.mau;
    result.mau = a.mau * b.tu;

    RutGon(result);

    return result;
}

int main()
{
    PhanSo x, y;
    printf("Phan so 1:\n");
    NhapPhanSo(x);
    printf("Phan so 2:\n");

    NhapPhanSo(y);

    XuatPhS(Cong(x, y));
    XuatPhS(Tru(x, y));
    XuatPhS(Nhan(x, y));
    XuatPhS(Chia(x, y));

    return 0;
}

/*
if (a > b)
    return a;
else
    retun b;

return a > b ? a : b
*/
