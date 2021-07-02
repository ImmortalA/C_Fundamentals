#include <stdio.h>
#define max 100

void print_(int size)
{
    for (int i = 0; i < 2 * size - 1; i++)
        printf("=");
    printf("\n");
}

void nhapMaTran(int (*mat)[max], int &size)
{
    printf("Nhap kich thuoc ma tran:\n");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
}

void xuatMaTran(int (*mat)[max], int &size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

void danhSo0(int (*mat)[max], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            mat[i][j] = 0;
    }
}

void ganNuaCheoChinhTren(int (*mat)[max], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
            mat[i][j] = 1;
    }
}

void ganNuaCheoChinhDuoi(int (*mat)[max], int size)
{
    for (int j = 0; j < size; j++)
    {
        for (int i = j; i < size; i++)
            mat[i][j] = 1;
    }
}

void ganNuaCheoPhuTren(int (*mat)[max], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= size - i - 1; j++)
            mat[i][j] = 1;
    }
}

void ganNuaCheoPhuDuoi(int (*mat)[max], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = size - i - 1; j < size; j++)
            mat[i][j] = 1;
    }
}

int main()
{
    int mat[max][max];
    int size = 7;

    // nhapMaTran(mat, size);
    // xuatMaTran(mat, size);

    printf("Cheo chinh tren\n");
    danhSo0(mat, size);
    ganNuaCheoChinhTren(mat, size);
    xuatMaTran(mat, size);
    print_(size);

    printf("Cheo chinh duoi\n");
    danhSo0(mat, size);
    ganNuaCheoChinhDuoi(mat, size);
    xuatMaTran(mat, size);
    print_(size);

    printf("Cheo phu tren\n");
    danhSo0(mat, size);
    ganNuaCheoPhuTren(mat, size);
    xuatMaTran(mat, size);
    print_(size);

    printf("Cheo phu duoi\n");
    danhSo0(mat, size);
    ganNuaCheoPhuDuoi(mat, size);
    xuatMaTran(mat, size);
    print_(size);

    return 0;
}