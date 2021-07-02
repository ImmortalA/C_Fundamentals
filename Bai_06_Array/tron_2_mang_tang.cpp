#include <stdio.h>
#define max 100

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

void tronMangTangDan(int *arr1, int size1, int *arr2, int size2, int *arr_mix, int &size_mix)
{
    size_mix = size1 + size2;
    int i = 0, j = 0;
    for (int k = 0; k < size_mix; k++)
    {
        if (i >= size1)
        {
            arr_mix[k] = arr2[j];
            j++;
            continue;
        }
        if (j >= size2)
        {
            arr_mix[k] = arr1[i];
            i++;
            continue;
        }

        //Chon phan tu be hon trong 2 mang de gan vao mang moi
        if (arr1[i] <= arr2[j])
        {
            arr_mix[k] = arr1[i];
            i++;
        }
        else
        {
            arr_mix[k] = arr2[j];
            j++;
        }
    }
}

int main()
{
    int arr1[max];
    int arr2[max];
    int arr_mix[max];
    int size1, size2, size_mix;
    int value = 5;

    nhapMang(arr1, &size1);
    nhapMang(arr2, &size2);

    xuatMang(arr1, size1);
    xuatMang(arr2, size2);

    tronMangTangDan(arr1, size1, arr2, size2, arr_mix, size_mix);
    xuatMang(arr_mix, size_mix);

    return 0;
}