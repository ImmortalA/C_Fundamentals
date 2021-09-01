#include <stdio.h>
#include <string.h>
#include <math.h>

#define max 50

struct Diem
{
    double x, y;
};

struct TamGiac
{
    Diem A, B, C;
};

int func;
Diem func;

int main()
{
    Diem A;
    TamGiac tam_giac;

    tam_giac.A.x;

    printf("Nhap toa do x:\n");
    scanf("%lf", &A.x);

    printf("Nhap toa do y:\n");
    scanf("%lf", &A.y);

    printf("(%.2lf, %.2lf)", A.x, A.y);

    return 0;
}