#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#ifdef _WIN32
#include <conio.h>
#define clrscr() printf("\e[1;1H\e[2J")
#endif

int rotate_right(int ch)
{
    if (ch == 'z')
        return 'a';
    if (ch == 'Z')
        return 'A';
    ch++;
    return ch;
}

int rotate_left(int ch)
{
    if (ch == 'a')
        return 'z';
    if (ch == 'A')
        return 'Z';
    ch--;
    return ch;
}

int encode(int ch, int shift)
{
    if (shift == 0)
        return ch;
    else if (shift > 0)
    {
        for (int i = 1; i <= shift; i++)
        {
            ch = rotate_right(ch);
        }
        return ch;
    }
    else
    {
        for (int i = 1; i <= -shift; i++)
        {
            ch = rotate_left(ch);
        }
        return ch;
    }
}

int main()
{
    char text[100];
    int shift;
    int check = 1;

    while (check)
    {
        clrscr();
        fflush(stdin);
        printf("Enter text: ");
        fgets(text, 100, stdin);
        printf("Enter shift: ");
        scanf("%d", &shift);

        for (int i = 0; text[i] != '\0'; i++)
        {
            if (text[i] >= 'a' && text[i] <= 'z')
            {
                text[i] = encode(text[i], shift);
            }
            if (text[i] >= 'A' && text[i] <= 'Z')
            {
                text[i] = encode(text[i], shift);
            }
        }
        printf("\n%s\n", text);
        
        printf("Continue? (1: Yes, 0: No): ");
        scanf("%d", &check);
    }
    return 0;
}


// for (int i = 0; text[i] != '\0'; i++)