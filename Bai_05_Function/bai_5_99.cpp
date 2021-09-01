#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    while (n > 0)
    {
        fact *= n;
        n--;
    }
    return fact;
}

int toHop(int n, int k)
{
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main()
{
    int ans = toHop(10, 3);
    printf("Ans = %d", ans);
    return 0;
}