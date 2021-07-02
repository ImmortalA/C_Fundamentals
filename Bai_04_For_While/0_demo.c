#include <stdio.h>

int main()
{
    int n = 10;

    for (int i = 1; i <= n; i++)
    {
        if (i == 3)
            break;
        printf("%d ", i);
    }

    return 0;
}

// Nhap n
// Tinh tong cac so tu 1 cho toi n