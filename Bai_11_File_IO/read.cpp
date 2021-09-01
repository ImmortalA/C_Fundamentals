#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    FILE *fptr;

    fptr = fopen(".\\filetext.txt", "r");

    fscanf(fptr, "%[^\n]", str); //Doc toi /n thi thoi
    printf("\n%s", str);

    fclose(fptr);

    return 0;
}
