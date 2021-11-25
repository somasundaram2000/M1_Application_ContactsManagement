#include "function.h"
int delete_contact()
{
    system("cls");
     fp = fopen("contact.txt","r");
     fp1 = fopen("temp.txt","a");
     char number[100];
     char date[20];
     int f=0;
     printf("\n\n\n\t\t\t\tenter your name you want to Delete :  ");
     scanf("%s",&number);

     while(fscanf(fp,"%s %s %s %s\n",c.name,c.phone,c.address,c.email)!=EOF)
     {
            if(strcmp(c.name,number)==0)
            {
                    f =1;
                    printf("\n\n\n\t\t\t\tDelete successfull\n\n");
            }
            else
            {
                fprintf(fp1,"%s %s %s %s\n",c.name,c.phone,c.address,c.email);
            }

     }
     if(f==0)
     {
            printf("\n\n\t\t\tname not found");
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
