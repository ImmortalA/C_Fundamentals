#include <stdio.h>

/* Nhap so hang, in ra tam giac duoi day:
Vd:
5

1
1   2
1   2   3
1   2   3   4
1   2   3   4   5
*/

int main()
{
    int n;
    printf("Nhap n:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d\t", j + 1);
        }
        printf("\n");
    }

    return 0;
}