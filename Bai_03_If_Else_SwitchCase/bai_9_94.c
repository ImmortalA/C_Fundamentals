/*
Nhập vào ngày, tháng, năm. Hãy kiểm tra tính hợp lệ của ngày tháng năm nhập vào. Nếu hợp lệ hãy
cho biết tháng nhập có bao nhiêu ngày, ngày hôm sau của ngày đã nhập là ngày nào.
(Biết rằng năm nhuận là năm (chia hết cho 400) hoặc (chia hết cho 4 và không chia hết cho 100)).
*/
#include <stdio.h>

int main()
{
    int day, month, year;
    int day_final, month_final, year_final;
    int day_in_month;
    int leap_year = 0;

    printf("Nhap ngay, thang, nam\n");
    scanf("%d %d %d", &day, &month, &year);

    day_final = day;
    month_final = month;
    year_final = year;

    //Kiem tra nam nhuan
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        leap_year = 1;

    //Set so ngay trong thang
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day_in_month = 31;
        break;
    case 2:
        if (leap_year == 1)
            day_in_month = 29;
        else
            day_in_month = 28;
        break;
    default:
        day_in_month = 30;
        break;
    }

    //Kiem tra xem so ngay trong thang co hop le khong, neu co in ra so ngay trong thang
    if ((day < 1 || day > day_in_month) || (month < 1 || month > 12) || year < 0)
    {
        printf("Ngay thang nam khong hop le\n");
        return 0;
    }
    else
        printf("Thang %d co %d ngay\n", month, day_in_month);

    //In ra ngay tiep theo
    if (day == day_in_month)
    {
        if (month == 12)
        {
            day_final = 1;
            month_final = 1;
            year_final++;
        }
        else
        {
            day_final = 1;
            month_final++;
        }
    }
    else
        day_final++;

    printf("Ngay hom sau cua ngay %d/%d/%d la: %d/%d/%d", day, month, year, day_final, month_final, year_final);

    return 0;
}
