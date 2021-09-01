#include <stdio.h>
#include <math.h>

struct Diem
{
    double x, y;
};

void NhapDiem(Diem &d)
{
    // double temp;

    // printf("Nhap x:\n");
    // scanf("%lf", &temp); //struct trong C không scanf địa chỉ các biến không phải int, do đó phải dùng biến tạm
    // d.x = temp;

    // printf("Nhap y:\n");
    // scanf("%lf", &temp);
    // d.y = temp;
    printf("Nhap x:\n");
    scanf("%lf", &d.x);

    printf("Nhap y:\n");
    scanf("%lf", &d.y);
}

void XuatDiem(Diem d)
{
    printf("(%.2lf, %.2lf)\n", d.x, d.y);
}

double KhoangCach(Diem a, Diem b)
{
    double distance = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    return distance;
}

Diem DoiXungGocTD(Diem d)
{
    d.x = -d.x;
    d.y = -d.y;
    return d;
}

Diem DoiXungTung(Diem d)
{
    d.x = -d.x;
    return d;
}

Diem DoiXungHoanh(Diem d)
{
    d.y = -d.y;
    return d;
}

//1: I, 2: II, 3: III, 4: IV, 0: Goc Toa Do
int GocPhanTu(Diem d)
{
    if (d.x > 0 && d.y > 0)
        return 1;
    else if (d.x < 0 && d.y > 0)
        return 2;
    else if (d.x < 0 && d.y < 0)
        return 3;
    else if (d.x > 0 && d.y < 0)
        return 4;
    else
        return 0;
}