#include <stdio.h>

int main()
{
    char loai_phong;
    int tien_thue, ngay_thue;
    int loai_a = 250000, loai_b = 200000, loai_c = 150000;

    printf("Nhap loai phong:\n");
    scanf("%c", &loai_phong);
    printf("Nhap so ngay thue:\n");
    scanf("%d", &ngay_thue);

    switch (loai_phong)
    {
    case 'a':
        tien_thue = ngay_thue * loai_a;
        if (ngay_thue > 12)
            tien_thue -= tien_thue * 10 / 100;
        break;
    case 'b':
        tien_thue = ngay_thue * loai_b;
        if (ngay_thue > 12)
            tien_thue -= tien_thue * 8 / 100;
        break;
    case 'c':
        tien_thue = ngay_thue * loai_c;
        if (ngay_thue > 12)
            tien_thue -= tien_thue * 8 / 100;
        break;
    }
    printf("Tien thue: %d", tien_thue);
    return 0;
}