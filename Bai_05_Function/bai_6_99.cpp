#include <stdio.h>

int fact(int n)
{
    int fact = 1;
    for (int i = n; i > 1; i--)
        fact = fact * i;
    return (fact);
}

int C(int n, int k)
{
    return (fact(n) / (fact(k) * fact(n - k)));
}

int main()
{
    int n;

    printf("Nhap so dong:\n");
    scanf("%d", &n);
    printf("\n");

    for (int dong = 0; dong < n; dong++)
    {
        for (int cot = 0; cot <= dong; cot++)
        {
            printf("%d\t", C(dong, cot));
        }
        printf("\n");
    }
}
