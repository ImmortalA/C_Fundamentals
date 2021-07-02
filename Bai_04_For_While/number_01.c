#include <stdio.h>

/* Nhap so hang, so cot, in tang dan:
Vd:
3
4

1   2   3   4
5   6   7   8
9   10  11  12
*/

int main()
{
    int hang, cot, count = 0;
    printf("Nhap hang, cot:\n");
    scanf("%d %d", &hang, &cot);

    for (int i = 0; i < hang; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            count++;
            printf("%d\t", count);
        }
        printf("\n");
    }

    return 0;
}