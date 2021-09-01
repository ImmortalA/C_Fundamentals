#include <stdio.h>
#define max 100

int main()
{
    int row = 5;
    int col = 4;
    int count = 0;
    int mat[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            count++;
            mat[i][j] = count;
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         printf("%d\t", mat[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}