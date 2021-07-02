#include <stdio.h>
#define max 100

int func(int (*mat)[max], int row, int col) {}
int arr_func(int *arr, int size) {}

int main()
{
    int row = 4, col = 3;
    int mat[row][col] = {{1, 2, 8},
                         {3, 4, 9},
                         {5, 6, 5},
                         {7, 8, 8}};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }

    return 0;
}