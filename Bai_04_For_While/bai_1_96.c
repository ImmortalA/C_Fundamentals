#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    printf("Nhap so n:\n");
    scanf("%d", &n);
    
    //cau a
    int cau_a = 1;
    for (int i = 1; i <= n; i++)
    {
        cau_a *= i; // cau_a = cau_a * i;
    }
    printf("a/ n! = %d\n", cau_a);

    //cau c
    int cau_c = 0;
    for (int i = 1; i <= n; i++)
    {
        cau_c += i * (i + 1);
    }
    printf("c/ s = %d\n", cau_c);

    //cau d
    int cau_d = 0;
    for (int i = 1; i <= n; i++)
    {
        cau_d += pow(i, i);
    }
    printf("d/ s = %d\n", cau_d);

    //cau e
    float cau_e = 0;
    for (int i = 1; i <= n; i++)
    {
        cau_e += (1.0 / i);
    }
    printf("e/ s = %f\n", cau_e);

    return 0;
}