#include <stdio.h>

int main()
{
    int x;

    printf("Nhap x:\n");
    scanf("%d", &x);

    if (x == 1)
    {
        printf("Mot con vit xoe ra hai cai canh");
    }
    else if (x == 2)
    {
        printf("Hai con than lan con dua nhau can nhau dut duoi");
    }
    else if (x == 3)
    {
        printf("Ba thuong con vi con giong me");
    }
    else if (x == 4)
    {
        printf("Bon phuong troi ta ve day chung vui");
    }
    else if (x == 5)
    {
        printf("Nam anh em tren mot chiec xe tang");
    }
    else
    {
        printf("Khong tim thay bai hat");
    }

    return 0;
}