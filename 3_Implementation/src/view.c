#include "function.h"
int view_contact()
{
    system("cls");
    fp=fopen("contact.txt","r");
    if(fp == NULL)
    {
        printf("file does not found !");
        exit(1);
    }
    else
    fp=fopen("contact.txt","r");
    {
        printf("\n\n\n\t\tName                 Phone number            Address               Email\n");
        printf("========================================================================================");
        while(fscanf(fp,"%s %s %s %s\n",c.name,c.phone,c.address,c.email)!=EOF)
        {
            printf("\n\nNAME: %s",c.name);
            printf("\nPHONE NUMBER : %s",c.phone);
            printf("\nADDRESS : %s",c.address);
            printf("\nEMAIL : %s",c.email);
        }
        printf("\n\n=========================================================================================");

    }
   fclose(fp);

}
