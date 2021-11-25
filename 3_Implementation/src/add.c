#include "function.h"
int add_contact()
{
    system("cls");
        char r[10];
        char number[10];
        gets(r);
        fp=fopen("contact.txt","a+");
        {
            printf("\n\n\n\t\t\t\tName : ");
            scanf("%s",c.name);
            printf("\n\t\t\t\tPhone Number : ");
            scanf("%s",&c.phone);
            printf("\n\t\t\t\tAddress : ");
            scanf("%s",c.address);
            printf("\n\t\t\t\tEmail : ");
            scanf("%s",c.email);
            fprintf(fp,"%s %s %s %s\n",c.name,c.phone,c.address,c.email);
            printf("\n\n\t\t\t\tRecord insert successful");

        }

       fclose(fp);

}
