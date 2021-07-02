#include <stdio.h>
#define max 100

void xuatMaTran(int (*mat)[max], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

void DanhSoXoan(int (*mat)[max], int row, int col)
{
    int count = 0;
    int start_row = 0;
    int start_col = 0;

    while (start_row < row && start_col < col)
    {
        //Duyet hang tren cung cua tung vong lap
        for (int j = start_col; j < col; j++)
            mat[start_row][j] = ++count;
        start_row++;
        //Duyet cot cuoi cung cua tung vong lap
        for (int i = start_row; i < row; i++)
            mat[i][col - 1] = ++count;
        col--;
        //Duyet hang cuoi cung cua tung vong lap
        if (start_row < row)
        {
            for (int j = col - 1; j >= start_col; j--)
                mat[row - 1][j] = ++count;
            row--;
        }
        //Duyet cot tren cung cua tung vong lap
        if (start_col < col)
        {
            for (int i = row - 1; i >= start_row; i--)
                mat[i][start_col] = ++count;
            start_col++;
        }
    }
}

int main()
{
    int mat[max][max];
    int row = 10, col = 4;

    DanhSoXoan(mat, row, col);
    xuatMaTran(mat, row, col);
    printf("==========================\n");

    return 0;
}