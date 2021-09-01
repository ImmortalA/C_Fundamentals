#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    FILE *fptr;
    fptr = fopen(".\\filetext.txt", "w"); //w = write, r = read

    printf("Enter string: ");
    gets(str);

    fprintf(fptr, "%s", str);
    fclose(fptr);

    return 0;
}