#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int *p;

    printf("Nhap so phan tu mang:\n");
    scanf("%d", &size);

    p = (int *)calloc(size, sizeof(int)); //Sau khi khoi tao, bien co gia tri la 0

    for (int i = 0; i < size; i++)
    {
        printf("Nhap phan tu #%d: ", i);
        scanf("%d", p + i);
    }
    for (int i = 0; i < size; i++)
    {
        printf("p + %d = %d\n", i, *(p + i));
    }

    free(p);
    return 0;
}