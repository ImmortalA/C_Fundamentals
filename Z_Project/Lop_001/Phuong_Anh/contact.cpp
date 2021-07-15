#include <stdio.h>
#include <string.h>
#include "contact.h"

int main()
{
    int ch, choice = 1;
    while (choice == 1)
    {
        mainmenu(ch);
        switch (ch)
        {
        case 1:
            add(list);
            break;
        case 2:
            lists(list);
            break;
        case 3:
            search(list);
            break;
        case 4:
            edit(list);
            break;
        case 5:
            Delete(list);
            break;
        default:
            printf("\nInvalid choice!");
            break;
        }
        printf("\n\nEnter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n");
        scanf("%d", &choice);
    }
    return 0;
}