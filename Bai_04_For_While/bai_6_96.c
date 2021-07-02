#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Nhap n:\n");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("\n%d khong phai so nguyen to", n);
        return 0;
    }

    int flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag++;
            break;
        }
    }
    if (flag == 0)
        printf("%d la so nguyen to", n);
    else
        printf("%d khong phai so nguyen to", n);
    return 0;
}