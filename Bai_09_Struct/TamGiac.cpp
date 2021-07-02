#include "Diem.h"

/*====================================//
//              Tam Giac
//====================================*/
struct TamGiac
{
    Diem A, B, C;
};

int HopLe(TamGiac t)
{
    double a = KhoangCach(t.C, t.B);
    double b = KhoangCach(t.C, t.A);
    double c = KhoangCach(t.A, t.B);

    if (a + b > c && b + c > a && c + a > b)
        return 1;
    return 0;
}

void NhapTamGiac(TamGiac &t)
{
    int check;
    do
    {
        NhapDiem(t.A);
        NhapDiem(t.B);
        NhapDiem(t.C);
        check = HopLe(t);
        if (check == 0)
            printf("Tam giac khong hop le\n");
    } while (check == 0);
}

void XuatTamGiac(TamGiac t)
{
    printf("A: ");
    XuatDiem(t.A);
    printf("B: ");
    XuatDiem(t.A);
    printf("C: ");
    XuatDiem(t.A);
}

double ChuVi(TamGiac t)
{
    double a = KhoangCach(t.C, t.B);
    double b = KhoangCach(t.C, t.A);
    double c = KhoangCach(t.A, t.B);
    return a + b + c;
}

double DienTich(TamGiac t)
{
    double a = KhoangCach(t.C, t.B);
    double b = KhoangCach(t.C, t.A);
    double c = KhoangCach(t.A, t.B);
    double p = ChuVi(t) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    TamGiac t;

    printf("Nhap tam giac:\n");
    NhapTamGiac(t);
    XuatTamGiac(t);

    printf("Chu vi =\t%.2lf\n", ChuVi(t));
    printf("Dien tich =\t%.2lf\n", DienTich(t));

    return 0;
}

/*
    TamGiac t;
    t.A.x
*/