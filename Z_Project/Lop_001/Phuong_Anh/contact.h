#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 50

struct contact
{
    char phone[max];
    char name[max], address[max], email[max];
} list;

void mainmenu(int &ch)
{
    system("clear");
    printf("\t\tWELCOME TO CONTACT MANAGEMENT SYSTEM");
    printf("\n\t\t=============MAIN MENU==============");
    printf("\n[1]\tADD CONTACT");
    printf("\n[2]\tLISTS OF CONTACT");
    printf("\n[3]\tSEARCH CONTACTS");
    printf("\n[4]\tEDIT CONTACTS");
    printf("\n[5]\tDELETE CONTACTS");
    printf("\n\tEnter your choice: ");
    scanf("%d", &ch);
}

void add(contact list)
{
    system("clear");
    int yn = 1;
    FILE *fp;
    fp = fopen("contact.txt", "a");
    while (yn == 1)
    {
        fpurge(stdin);
        printf("\n\tNAME: ");
        gets(list.name);
        fpurge(stdin);
        printf("\n\tPHONE: ");
        gets(list.phone);
        fpurge(stdin);
        printf("\n\tADDRESS: ");
        gets(list.address);
        fpurge(stdin);
        printf("\n\tEMAIL: ");
        gets(list.email);
        fwrite(&list, sizeof(list), 1, fp);
        printf("\nDo you want to add another contact? [1] Yes, [2] No\n");
        scanf("%d", &yn);
    }
    fclose(fp);
}

void lists(contact list)
{
    system("clear");
    FILE *fp;
    int i;
    printf("\n\t\t================================\n\t\t\tLIST OF CONTACTS\n\t\t================================\n\nName\t\tPhone No\t\tAddress\t\tE-mail ad.\n=================================================================\n\n");
    for (i = 50; i <= 250; i++)
    {
        fp = fopen("contact.txt", "r");
        while (fread(&list, sizeof(list), 1, fp) == 1)
        {
            if (list.name[0] == i)
                printf("\n%s\t\t%s\t\t\t%s\t\t%s\n", list.name, list.phone, list.address, list.email);
        }
        fclose(fp);
    }
}

void search(contact list)
{
    system("clear");
    char input[30], name[30];
    int i, l, choice = 1;
    // int found = 0;
    while (choice == 1)
    {
        int found = 0;
        fpurge(stdin);
        printf("\n\nCONTACT SEARCH\n===========================\nName of contact to search: ");
        gets(input);
        l = strlen(input);
        FILE *fp;
        fp = fopen("contact.txt", "r");
        printf("\n\nSearch results for '%s' \n===================================================\n", input);
        while (fread(&list, sizeof(list), 1, fp) == 1)
        {
            for (i = 0; i <= l; i++)
                name[i] = list.name[i];
            name[l] = '\0';
            if (strcmp(name, input) == 0)
            {
                printf("\nName\t: %s\nPhone\t: %s\nAddress\t: %s\nEmail\t: %s\n", list.name, list.phone, list.address, list.email);
                found++;
            }
        }
        if (found == 0)
            printf("\nNo match found!");
        else
            printf("\n%d match(es) found!", found);
        fclose(fp);
        printf("\nTry again?");
        printf("\n[1]\tYes");
        printf("\n[2]\tNo\n");
        scanf("%d", &choice);
    }
}

void edit(contact list)
{
    system("clear");
    FILE *fp, *ft;
    char name[30];
    fp = fopen("contact.txt", "r");
    ft = fopen("temp.txt", "w");
    printf("\n=========Edit contact=========");
    printf("\n===============================");
    fpurge(stdin);
    printf("\nEnter the name of contact to edit: ");
    gets(name);
    while (fread(&list, sizeof(list), 1, fp) == 1)
    {
        if (strcmp(name, list.name) != 0)
            fwrite(&list, sizeof(list), 1, ft);
    }
    printf("\nEditing %s", name);
    fpurge(stdin);
    printf("\nNEW NAME: ");
    gets(list.name);
    fpurge(stdin);
    printf("\nNEW PHONE: ");
    gets(list.phone);
    fpurge(stdin);
    printf("\nNEW ADDRESS: ");
    gets(list.address);
    fpurge(stdin);
    printf("\nNEW EMAIL: ");
    gets(list.email);
    printf("\n");
    fwrite(&list, sizeof(list), 1, ft);
    fclose(fp);
    fclose(ft);
    remove("contact.txt");
    rename("temp.txt", "contact.txt");
}

void Delete(contact list)
{
    system("clear");
    FILE *fp, *ft;
    char name[30];
    printf("\n\n\tDELETE A CONTACT");
    printf("\n==========================");
    fpurge(stdin);
    printf("\nEnter the name of contact to delete: ");
    gets(name);
    fp = fopen("contact.txt", "r");
    ft = fopen("temp.txt", "w");
    while (fread(&list, sizeof(list), 1, fp) != 0)
    {
        if (strcmp(name, list.name) != 0)
            fwrite(&list, sizeof(list), 1, ft);
    }
    fclose(fp);
    fclose(ft);
    remove("corrections.txt");
    rename("temp.txt", "contact.txt");
}