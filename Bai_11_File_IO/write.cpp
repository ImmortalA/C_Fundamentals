#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num;
    char str[100];
    FILE *fptr;
    fptr = fopen(".\\program.txt", "w");

    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("Enter string: ");
    // scanf("%d", &num);
    gets(str);

    fprintf(fptr, "%s", str);
    fclose(fptr);

    return 0;
}