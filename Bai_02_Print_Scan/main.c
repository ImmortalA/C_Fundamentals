#include <stdio.h>

int main()
{
    int a; //%d
    char b;//%c

    printf("Nhap so nguyen a:\n");
    scanf("%d", &a);
    // fflush(stdin);
    printf("Nhap chu cai b\n");
    scanf("%c", &b);

    printf("%d %c", a, b);

    return 0;
}

/* 
Nhap 1 so nguyen
Nhap 1 chu cai
In so va chu cai tren cung 1 dong

vi du:

Nhap so nguyen a:
4
Nhap chu cai b:
a
4 a
*/