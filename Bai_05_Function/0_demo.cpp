#include <stdio.h>

int m = 6;

void func(int x)
{
    for (int i = 1; i <= x; i++)
        printf("%d\t", i);
}
int main()
{
    int a = 7;

    // printf("Result: %d\n", func(a));
    func(a);
    return 0;
}
