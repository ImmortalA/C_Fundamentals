#include <stdio.h>
#include <string.h>
#include <math.h>

struct TamGiac
{
    float a, b, c;
};

int validTri(int a, int b, int c)
{
    //thoa
    return 1;
    //khong thoa
    return 0;
}

int main()
{
    TamGiac ABC;

    do
    {
        printf("Nhap canh a: ");
        scanf("%f", &ABC.a);
        printf("Nhap canh b: ");
        scanf("%f", &ABC.b);
        printf("Nhap canh c: ");
        scanf("%f", &ABC.c);
    } while (!((ABC.a + ABC.b > ABC.c) && (ABC.a + ABC.c > ABC.b) && (ABC.b + ABC.c > ABC.a)));

    float p = (ABC.a + ABC.b + ABC.c) / 2;
    float dien_tich = sqrt(p * (p - ABC.a) * (p - ABC.b) * (p - ABC.c));

    printf("Chu vi tam giac: %f\n", 2 * p);
    printf("Dien tich tam giac: %f\n", dien_tich);

    return 0;
}
//Nhap 3 canh
//Tinh dien tich, chu vi