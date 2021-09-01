#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    FILE *fptr;

    fptr = fopen(".\\filetext.txt", "r");

    while (fgets(str, sizeof(str), fptr) != NULL)
    {
        fprintf(stderr, "%s", str);
    }

    fclose(fptr);

    return 0;
}
