#include <stdio.h>

int main() {
    int so_nguyen;
    double so_thuc;
    char ky_tu;

    printf("Nhap mot so nguyen:\n");
    scanf("%d", &so_nguyen);
    printf("Nhap mot so thuc:\n");
    scanf("%lf", &so_thuc);
    fflush(stdin);
    printf("Nhap mot ky tu:\n");
    scanf("%c", &ky_tu);

    printf("%d, %.2lf, %c", so_nguyen, so_thuc, ky_tu);

    return 0;
}