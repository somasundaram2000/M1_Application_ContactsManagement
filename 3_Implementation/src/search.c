
#include "function.h"
int search_contact()
{
    system("cls");
    char number[30];
    fp = fopen("contact.txt","r");
    printf("\n\n\n\t\t\t\tenter your name  :  ");
    scanf("%s",&number);
    if(fp == NULL)
    {
            printf("file does not found !");
            exit(1);
    }
    else{
        fp=fopen("contact.txt","r");
        {
            while(fscanf(fp,"%s %s %s %s\n",c.name,c.phone,c.address,c.email)!=EOF)
            {
                if(strcmp(c.name,number)==0)
                {
                    printf("\n\n\n\t\tName                 Phone number            Address               Email\n");
                    printf("========================================================================================");
                    printf("\n\nNAME: %s",c.name);
                    printf("\nPHONE NUMBER : %s",c.phone);
                    printf("\nADDRESS : %s",c.address);
                    printf("\nEMAIL : %s",c.email);
                    printf("\n\n=========================================================================================");
                }

            }
        }
    }
    fclose(fp);

}
