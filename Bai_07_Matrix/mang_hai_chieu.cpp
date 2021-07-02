#include <stdio.h>
#define max 100

void swap(int &a, int &b)
{
    int t;
    t = a;
    a = b;
    b = t;
}

void nhapMaTran(int (*mat)[max], int &row, int &col)
{
    printf("Nhap hang:\n");
    scanf("%d", &row);
    printf("Nhap cot:\n");
    scanf("%d", &col);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
        {
            printf("mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
}

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

int tongMaTran(int (*mat)[max], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += mat[i][j];
        }
    }
    return sum;
}

int maxMat(int (*mat)[max], int row, int col)
{
    int max_mat = mat[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            if (mat[i][j] > max_mat)
                max_mat = mat[i][j];
    }
    return max_mat;
}

int mixMat(int (*mat)[max], int row, int col)
{
    int mix_mat = mat[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            if (mat[i][j] < mix_mat)
                mix_mat = mat[i][j];
    }
    return mix_mat;
}

void danhSoTangNgang(int (*mat)[max], int row, int col)
{
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat[i][j] = ++count;
        }
    }
}

void danhSoTangDoc(int (*mat)[max], int row, int col)
{
    int count = 0;
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            mat[i][j] = ++count;
        }
    }
}



int main()
{
    // int row, col;
    int mat[max][max];

    int row = 3, col = 4;
    // int mat[max][max] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // // nhapMaTran(mat, row, col);
    // xuatMaTran(mat, row, col);

    // int tong = tongMaTran(mat, row, col);
    // printf("Tong ma tran = %d\n", tong);

    // printf("Max mat = %d\n", maxMat(mat, row, col));

    danhSoTangNgang(mat, row, col);
    xuatMaTran(mat, row, col);
    printf("==========================\n");

    danhSoTangDoc(mat, row, col);
    xuatMaTran(mat, row, col);
    printf("==========================\n");

    return 0;
}