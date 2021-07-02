#include <stdio.h>

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

//Kiem tra nam nhuan
bool namNhuan(int nam)
{
    if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
        return true;
    return false;
}

int demNamNhuan(int thang, int nam)
{
    if (thang < 2)
        nam--;
    return nam / 4 - nam / 100 + nam / 400;
}

//Kiem tra xem ngay do la ngay thu bao nhieu trong nam
int ngayThuN(int ngay, int thang, int nam)
{
    int so_ngay;
    int ngay_trong_thang[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

    so_ngay = ngay_trong_thang[thang - 1] + ngay;
    if (namNhuan(nam) && thang > 2)
        so_ngay += 1;

    return so_ngay;
}

//Nhap 2 ngay thang nam, sap xep sao cho ngay truoc dung truoc, ngay sau dung sau
void sapXepNgay(int &ngay1, int &thang1, int &nam1, int &ngay2, int &thang2, int &nam2)
{
    if (nam1 * 10000 + thang1 * 100 + ngay1 > nam2 * 10000 + thang2 * 100 + ngay2)
    {
        swap(&thang1, &thang2);
        swap(&ngay1, &ngay2);
        swap(&nam1, &nam2);
    }
}

//Nhap ngay thang nam va kiem tra hop le
void nhapNgayThangNam(int &ngay, int &thang, int &nam)
{
    int ngay_trong_thang[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (namNhuan(nam))
        ngay_trong_thang[1] += 1;
    while (true)
    {
        printf("Nhap ngay, thang, nam:\n");
        scanf("%d %d %d", &ngay, &thang, &nam);
        if ((ngay < 1 || ngay > ngay_trong_thang[thang - 1]) || (thang < 1 || thang > 12) || nam < 0)
        {
            printf("Nhay thang nam khong hop le, vui long nhap lai\n");
            continue;
        }
        else
            break;
    }
}

//Dem so ngay giua 2 ngay cho truoc
void demNgay()
{
    int ngay1, thang1, nam1;
    int ngay2, thang2, nam2;

    nhapNgayThangNam(ngay1, thang1, nam1);
    nhapNgayThangNam(ngay2, thang2, nam2);

    sapXepNgay(ngay1, thang1, nam1, ngay2, thang2, nam2);
    int so_ngay;

    int x = ngayThuN(ngay1, thang1, nam1);
    int y = ngayThuN(ngay2, thang2, nam2);

    if (nam1 == nam2)
    {
        so_ngay = y - x;
    }
    else
        so_ngay = 365 * (nam2 - nam1) + (y - x) + demNamNhuan(thang2, nam2) - demNamNhuan(thang1, nam1);

    printf("So ngay = %d", so_ngay);
}

//Nhap ngay thang nam, ngay cong them, xuat ra ngay thang nam sau khi cong
void congNgay()
{
    int ngay, thang, nam;
    int ngay_them;

    nhapNgayThangNam(ngay, thang, nam);
    printf("Nhap ngay cong them:\n");
    scanf("%d", &ngay_them);

    int tong = ngayThuN(ngay, thang, nam) + ngay_them;

    for (int i = nam;; i++)
    { //tinh nam
        if (namNhuan(i))
        {
            if (tong <= 366)
                break;
            else
            {
                tong -= 366;
                nam += 1;
            }
        }
        else
        {
            if (tong <= 365)
                break;
            else
            {
                tong -= 365;
                nam += 1;
            }
        }
    }

    for (int i = 1;; i++)
    {
        if ((tong - ngayThuN(0, i, nam)) < 0)
        {
            thang = i - 1;
            ngay = tong - ngayThuN(0, i - 1, nam);
            break;
        }
    }
    printf("%d/%d/%d", ngay, thang, nam);
}