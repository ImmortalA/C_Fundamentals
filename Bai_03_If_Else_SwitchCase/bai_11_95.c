#include <stdio.h>

int main()
{
    int tien_loi = 0, m;

    printf("Nhap trong luong hang:\n");
    scanf("%d", &m);

    if (m <= 10)
        tien_loi = m * 5000;
    else if (m <= 20)
        tien_loi = m * 5000;
    else if (m <= 50)
    {
        tien_loi = m * 9000;
        tien_loi += tien_loi * 2 / 100; //tien_loi = tien_loi + tien_loi * 2 / 100
    }
    else
    {
        tien_loi = m * 10000;
        if (tien_loi * 4 / 100 > 1000000)
            tien_loi += 1000000;
        else
            tien_loi += tien_loi * 4 / 100;
    }
    printf("Tien loi: %d", tien_loi);

    return 0;
}