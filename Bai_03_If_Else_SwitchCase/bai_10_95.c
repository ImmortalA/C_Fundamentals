#include <stdio.h>

int main()
{
    int tien_luong = 0;
    int gio_vao, gio_ra;
    int tien_truoc_12h = 6000, tien_sau_12h = 7500;

    printf("Nhap gio vao ca:\n");
    scanf("%d", &gio_vao);
    printf("Nhap gio ra ca:\n");
    scanf("%d", &gio_ra);

    if (gio_vao < 6)
    {
        printf("Vao som an sang\n");
        gio_vao = 6;
    }
    if (gio_ra > 18)
    {
        printf("O lai an toi\n");
        gio_ra = 18;
    }

    if (gio_vao < 12)
    {
        if (gio_ra < 12)
            tien_luong = (gio_ra - gio_vao) * tien_truoc_12h;
        else
            tien_luong = (12 - gio_vao) * tien_truoc_12h + (gio_ra - 12) * tien_sau_12h;
    }
    else
        tien_luong = (gio_ra - gio_vao) * tien_sau_12h;
    printf("Tien luong: %d", tien_luong);

    return 0;
}