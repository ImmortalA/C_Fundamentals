#include "calendar_tools.h"

void printMenu()
{
    printf("\n=============================================================");
    printf("\nCHUONG TRINH TINH NGAY\n");
    printf("1. Nhap 2 ngay, tinh khoang cach giua 2 ngay do\n");
    printf("2. Nhap ngay, nhap ngay cong them, xuat ra ngay sau khi cong\n");
    printf("3. Thoat chuong trinh\n");
    printf("Nhap yeu cau:\n");
}

void menu()
{
    int request;

    while (true)
    {
        printMenu();
        scanf("%d", &request);
        switch (request)
        {
        case 1:
            demNgay();
            break;
        case 2:
            congNgay();
            break;
        case 3:
            return;
        }
    }
}