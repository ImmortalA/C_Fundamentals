#include <stdio.h>
/*
Nhap so hang:
6

******
*   *
*  *
* *
**
*

*/


int main()
{
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j <= rows; j++)
        {
            if (i == 1 || j == i || j == rows)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}