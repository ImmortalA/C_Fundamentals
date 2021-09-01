#include <stdio.h>
#define max 100

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void nhapMang(int *arr, int *size)
{
    do
    {
        printf("Nhap kich thuong mang:\n");
        scanf("%d", size);
    } while (*size < 1 || *size > max);
    for (int i = 0; i < *size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void xuatMang(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int tongMang(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int timKiem(int *arr, int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
            return i;
    }
    return -1;
}

int maxArr(int *arr, int size)
{
    int max_arr = arr[0];
    for (int i = 1; i < size; i++)
        if (max_arr < arr[i])
            max_arr = arr[i];
    return max_arr;
}

int minArr(int *arr, int size)
{
    int min_arr = arr[0];
    for (int i = 1; i < size; i++)
        if (min_arr > arr[i])
            min_arr = arr[i];
    return min_arr;
}

void themPhanTu(int *arr, int *size, int value, int position)
{
    if (position > *size || position < 0)
        printf("Invalid position!");
    else
    {
        (*size)++;
        for (int i = *size; i > position; i--)
            arr[i] = arr[i - 1];
        arr[position] = value;
    }
}

void xoaPhanTu(int *arr, int *size, int position)
{
    if (position >= *size || position < 0)
    {
        printf("Invalid position!");
    }
    else
    {
        (*size)--;
        for (int i = position; i < *size; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
}

void sortTang(int *arr, int size)
{
    //selection sort
    int min_position;
    for (int i = 0; i < size; i++)
    {
        min_position = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_position])
                min_position = j;
        }
        swap(arr[min_position], arr[i]);
    }
}

void sortGiam(int *arr, int size)
{
    int max_position;
    for (int i = 0; i < size; i++)
    {
        max_position = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] > arr[max_position])
                max_position = j;
        }
        swap(arr[max_position], arr[i]);
    }
}

void xoaGiaTri(int *arr, int *size, int value)
{
    int i = 0, j = 0, position = *size;
    while (j < *size)
    {
        if (arr[j] != value)
        {
            arr[i] = arr[j];
            i++;
            j++;
        }
        else
        {
            j++;
            position--;
        }
    }
    (*size) = position;
}

int bai2a_102(int *arr, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 6 == 0 && arr[i] % 10 == 6)
            count++;
    }
    return count;
}

int main()
{
    int arr[max];
    int size;
    int value = 5;

    nhapMang(arr, &size);
    xuatMang(arr, size);

    // tongMang(arr, size);
    // printf("\nTong = %d\n", tongMang(arr, size));
    // printf("Vi tri cua %d la: %d\n", value, timKiem(arr, size, value));
    // printf("Max mang: %d\n", maxArr(arr, size));
    // printf("Min mang: %d\n", minArr(arr, size));

    // themPhanTu(arr, &size, 17, 3);
    // xuatMang(arr, size);

    // printf("Xoa phan tu thu 4\n");
    // xoaPhanTu(arr, &size, 4);
    // xuatMang(arr, size);

    // printf("Sort tang\n");
    // sortTang(arr, size);
    // xuatMang(arr, size);

    // printf("Sort giam\n");
    // sortGiam(arr, size);
    // xuatMang(arr, size);

    // printf("Xoa phan tu 5\n");

    // xoaGiaTri(arr, &size, 5);
    // xuatMang(arr, size);
    // printf("size = %d\n", size);

    // printf("Bai 2a/102: %d\n", bai2a_102(arr, size));

    return 0;
}