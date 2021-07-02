#include <stdio.h>

int main()
{
    int d, m, y;

    printf("Nhap ngay, thang, nam:\n");
    scanf("%d %d %d", &d, &m, &y);
    int A = (d + 2 * m + (3 * (m + 1) / 5) + y + (y / 4) - y / 100 + y / 400 + 2) % 7;

    switch (A)
    {
    case 0:
        printf("%d/%d/%d la thu bay", d, m, y);
        break;
    case 1:
        printf("%d/%d/%d la thu Chu Nhat", d, m, y);
        break;
    case 2:
        printf("%d/%d/%d la thu hai", d, m, y);
        break;
    case 3:
        printf("%d/%d/%d la thu ba", d, m, y);
        break;
    case 4:
        printf("%d/%d/%d la thu tu", d, m, y);
        break;
    case 5:
        printf("%d/%d/%d la thu nam", d, m, y);
        break;
    case 6:
        printf("%d/%d/%d la thu sau", d, m, y);
        break;
    }
}