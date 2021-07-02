#include <stdio.h>

/* Nhap so hang, so cot, in tang dan, moi hang giong nhau:
Vd:
3
4

1   2   3   4
1   2   3   4
1   2   3   4
*/


int main()
{
    int hang, cot;
    printf("Nhap hang, cot:\n");
    scanf("%d %d", &hang, &cot);

    for (int i = 0; i < hang; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            printf("%d\t", j + 1);
        }
        printf("\n");
    }

    return 0;
}