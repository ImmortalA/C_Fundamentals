#include <stdio.h>

bool namNhuan(int nam)
{
    if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
        return true;
    return false;
}

int ngayThuN(int ngay, int thang, int nam)
{
    int so_ngay;
    switch (thang)
    {
    case 1:
        so_ngay = 0 + ngay;
        break;
    case 2:
        so_ngay = 31 + ngay;
        break;
    case 3:
        so_ngay = 59 + ngay;
        break;
    case 4:
        so_ngay = 90 + ngay;
        break;
    case 5:
        so_ngay = 120 + ngay;
        break;
    case 6:
        so_ngay = 151 + ngay;
        break;
    case 7:
        so_ngay = 181 + ngay;
        break;
    case 8:
        so_ngay = 212 + ngay;
        break;
    case 9:
        so_ngay = 243 + ngay;
        break;
    case 10:
        so_ngay = 273 + ngay;
        break;
    case 11:
        so_ngay = 304 + ngay;
        break;
    case 12:
        so_ngay = 334 + ngay;
        break;
    }
    if (namNhuan(nam) && thang > 2)
        so_ngay += 1;

    return so_ngay;
}

int main()
{
    printf("Ngay thu: %d", ngayThuN(5, 8, 2021));
}