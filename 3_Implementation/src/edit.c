#include "function.h"
int edit_contact()
{
    system("cls");
    int choice;
    char number[50];
    char present[15];
    int f=0;
    fp = fopen("contact.txt","r");
    fp1 = fopen("temp.txt","a");
    printf("\n\n\t\t\twhat would you like to edit?");
    printf("\n\n\t\t\t[1] Name Edit ");
    printf("\n\t\t\t[2] Phone Number Edit ");
    printf("\n\t\t\t[3] Address edit");
    printf("\n\t\t\t[4] Email edit");
    printf("\n\t\t\t[5] Back To The Main Menu");
    printf("'\n\n\t\t\t Enter your choice : ");
    scanf("%d",&choice);
    if(choice == 1)
    {
        printf("\n\n\n\t\t\t\t Enter your Name :  ");
        scanf("%s",number);
        while(fscanf(fp,"%s %s %s %s\n",c.name,c.phone,c.address,c.email)!=EOF)
        {
            if(strcmp(c.name,number)==0)
            {
                f =1;
                printf("\n\n\t\t\tEnter The New Name :");
                scanf("%s",present);
                fprintf(fp1,"%s %s %s %s\n",present,c.phone,c.address,c.email);
                printf("\n\n\n\t\t\t\tsuccessfully update\n\n ");
            }
            else
            {
                fprintf(fp1,"%s %s %s %s\n",c.name,c.phone,c.address,c.email);
            }

        }
        if(f==0)
        {
            printf("\n\n\t\t\tName not found");
        }
        fclose(fp);
        fclose(fp1);
        fp = fopen("contact.txt","w");
        fclose(fp);
        fp = fopen("contact.txt","a");
        fp1 = fopen("temp.txt","r");
        while(fscanf(fp1,"%s %s %s %s\n",c.name,c.phone,c.address,c.email)!=EOF)
        {
           fprintf(fp,"%s %s %s %s\n",c.name,c.phone,c.address,c.email);
        }
        fclose(fp);
        fclose(fp1);
        fp = fopen("temp.txt","w");
        fclose(fp);
    }
    if(choice == 2)
    {
        printf("\n\n\n\t\t\t\t Enter your Name :  ");
        scanf("%s",number);
        while(fscanf(fp,"%s %s %s %s\n",c.name,c.phone,c.address,c.email)!=EOF)
        {
            if(strcmp(c.name,number)==0)
            {
                f =1;
                printf("\n\n\t\t\tEnter Your New Phone Number :");
                scanf("%s",present);
                fprintf(fp1,"%s %s %s %s\n",c.name,present,c.address,c.email);
                printf("\n\n\n\t\t\t\tsuccessfully update\n\n ");
            }
            else
            {
                fprintf(fp1,"%s %s %s %s\n",c.name,c.phone,c.address,c.email);
            }

        }
        if(f==0)
        {
            printf("\n\n\t\t\tName not found");
        }
        fclose(fp);
        fclose(fp1);
        fp = fopen("contact.txt","w");
        fclose(fp);
        fp = fopen("contact.txt","a");
        fp1 = fopen("temp.txt","r");
        while(fscanf(fp1,"%s %s %s %s\n",c.name,c.phone,c.address,c.email)!=EOF)
        {
           fprintf(fp,"%s %s %s %s\n",c.name,c.phone,c.address,c.email);
        }
        fclose(fp);
        fclose(fp1);
        fp = fopen("temp.txt","w");
        fclose(fp);
    }
    if(choice == 3)
    {
        printf("\n\n\n\t\t\t\t Enter your Name :  ");
        scanf("%s",number);
        while(fscanf(fp,"%s %s %s %s\n",c.name,c.phone,c.address,c.email)!=EOF)
        {
            if(strcmp(c.name,number)==0)
            {
                f =1;
                printf("\n\n\t\t\tEnter The New Address :");
                scanf("%s",present);
                fprintf(fp1,"%s %s %s %s\n",c.name,c.phone,present,c.email);
                printf("\n\n\n\t\t\t\tsuccessfully update\n\n ");
            }
            else
            {
                fprintf(fp1,"%s %s %s %s\n",c.name,c.phone,c.address,c.email);
            }

        }
        if(f==0)
        {
            printf("\n\n\t\t\tName not found");
        }
        fclose(fp);
        fclose(fp1);
        fp = fopen("contact.txt","w");
        fclose(fp);
        fp = fopen("contact.txt","a");
        fp1 = fopen("temp.txt","r");
        while(fscanf(fp1,"%s %s %s %s\n",c.name,c.phone,c.address,c.email)!=EOF)
        {
           fprintf(fp,"%s %s %s %s\n",c.name,c.phone,c.address,c.email);
        }
        fclose(fp);
        fclose(fp1);
        fp = fopen("temp.txt","w");
        fclose(fp);
    }
    if(choice == 4)
    {
        printf("\n\n\n\t\t\t\t Enter your Name :  ");
        scanf("%s",number);
        while(fscanf(fp,"%s %s %s %s\n",c.name,c.phone,c.address,c.email)!=EOF)
        {
            if(strcmp(c.name,number)==0)
            {
                f =1;
                printf("\n\n\t\t\tEnter The New Email :");
                scanf("%s",present);
                fprintf(fp1,"%s %s %s %s\n",c.name,c.phone,c.address,present);
                printf("\n\n\n\t\t\t\tsuccessfully update\n\n ");
            }
            else
            {
                fprintf(fp1,"%s %s %s %s\n",c.name,c.phone,c.address,c.email);
            }

        }
        if(f==0)
        {
            printf("\n\n\t\t\tName not found");
        }
        fclose(fp);
        fclose(fp1);
        fp = fopen("contact.txt","w");
        fclose(fp);
        fp = fopen("contact.txt","a");
        fp1 = fopen("temp.txt","r");
        while(fscanf(fp1,"%s %s %s %s\n",c.name,c.phone,c.address,c.email)!=EOF)
        {
           fprintf(fp,"%s %s %s %s\n",c.name,c.phone,c.address,c.email);
        }
        fclose(fp);
        fclose(fp1);
        fp = fopen("temp.txt","w");
        fclose(fp);
    }
    

}
