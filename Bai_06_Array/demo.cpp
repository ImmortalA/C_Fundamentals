#include <stdio.h>
void plus(int &a){
    a++;
}

int main()
{
    int a = 5;
    plus(a);
    printf("%d\n", a);
    return 0;
}