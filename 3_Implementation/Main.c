#include<conio.h>
#include<string.h>
#include<stdio.h>
struct contact
{
 char nam[50];
 char adres[50];
 long int m_no;
 char gender[10];
 char m_id[100];
};
void Menu();
void Data();
void ARec();
void ListRec();
void ModRec();
void DelRec();
void SRec();
int Exit();
int main()
{
 Menu();
 return 0;
}
void Menu()
{
printf("\t\t WELCOME TO PHONEBOOK");
printf("\n\n\t\t\t MENU \t\t\n\n"); 
printf("\t\t 1.Add Contacts\n\t\t 2.Print all Contact\n\t\t 3.Modify Contacts\n");
printf("\t\t 4.Search contacts\n\t\t 5.Delete Contacts\n\t\t 6.Close Phonebook\n");
switch(getchar())
{
 case '1': ListRec();
 break;
 case '2': ARec();
 break;
 case '3': ModRec();
 break;
 case '4': SRec();
 break;
 case '5': DelRec();
 break;
 case '6': Exit();
 break;
 default: printf("\n Enter 1 to 6 only.");
getchar();
}
}
int Exit()
{
Menu();
return 0;
}
    void ARec()
{
    FILE *f;
    struct contact p;
    f=fopen("project","ab+");
    printf("\n Name: ");
    Data(p.nam);
    printf("\nAddress: ");
    Data(p.adres);
    printf("\nMobile no.:");
    scanf("%ld",&p.m_no);
    printf("Gender:");
    Data(p.gender);
    printf("\ne-mail:");
    Data(p.m_id);
    fwrite(&p,sizeof(p),1,f);
    fflush(stdin);
    printf("\nrecord saved");
fclose(f);
getchar();
Menu();
}
void ListRec()
{
  struct contact p;
  FILE *f;
f=fopen("project","rb");
if(f==NULL)
{
printf("\n No contacts detected yet!:\n");
Exit();
}
while(fread(&p,sizeof(p),1,f)==1)
{
  printf("\n\n\n YOUR RECORD IS\n\n");
  printf("\nName=%s\nAdress=%s\nMobile no=%ld\ngender=%s\nEmail=%s",p.nam,p.adres,p.m_no,p.gender,p.m_id);
  getchar();
}
fclose(f);
getchar();
Menu();
}
void SRec()
{
struct contact p;
FILE *f;
char name[100];
f=fopen("project","rb");
if(f==NULL)
{
 printf("\n Error in opening\n");
 Exit();
}
printf("\nEnter name of person to search\n");
Data(name);
while(fread(&p,sizeof(p),1,f)==1)
{
 if(strcmp(p.nam,name)==0)
{
  printf("\n\tDetail Information About %s",name);
  printf("\nName:%s\naddress:%s\nMobile no:%ld\ngender:%s\nEmail:%s",p.nam,p.adres,p.m_no,p.gender,p.m_id);
}
  else
  printf("Not found");
}
fclose(f);
getchar();
Menu();
}
void DelRec()
{
  struct contact p;
  FILE *f,*ft;
   int flag;
   char name[100];
   f=fopen("project","rb");
if(f==NULL)
printf("Contact data not yet added.");
else
{
    ft=fopen("temp", "wb+");
    if(ft==NULL)
 printf("file opening error");
    else
    {
    printf("Enter contact name:");
    Data(name);
    fflush(stdin);
    while(fread(&p,sizeof(p),1,f)==1)
    {
        if(strcmp(p.nam, name)!=0)
            fwrite(&p,sizeof(p),1,ft);
        if(strcmp(p.nam,name)==0)
    flag=1;
    }
fclose(f);
fclose(ft);
if(flag!=1)
{
    printf("No Record To Delete.");
    remove("temp.txt");
}
    else
  {
    remove("project");
    rename("temp.txt","project");
    printf("Record Deleted");
  }
 }
}
getch();
Menu();
}
void ModRec()
{
int c;
FILE *f;
int flag=0;
struct contact p,s;
    char nam[50];
    f=fopen("project","rb+");
    if(f==NULL)
           {
               printf("No Contact added yet!\n");
               Exit();
           }
    else
    {
    printf("Enter Name to modify:\n");
    Data(nam);
    while(fread(&p,sizeof(p),1,f)==1)
    {
       if(strcmp(nam,p.nam)==0)
       {
        printf("\nName:");
        Data(s.nam);
        printf("\nAddress:");
        Data(s.adres);
        printf("\nPhone no:");
        scanf("%ld",&s.m_no);
        printf("\nGender:");
        Data(s.gender);
        printf("\ne-mail:");
        Data(s.m_id);
        fseek(f,-sizeof(p),SEEK_CUR);
        fwrite(&s,sizeof(p),1,f);
        flag=1;
        break;
    }
      fflush(stdin);
   }
   if(flag==1)
     printf("\n Your contact is modified");
   else
   printf(" \n Contact data not found");
   fclose(f);
  }
getch();
Menu();
}
void Data(char *Name)
{
int i=0,j;
char ch,cha;
do
{
    ch=getch();
        if(ch!=8&&ch!=13)
        {
            *(Name+i)=ch;
            putchar(ch);
            i++;
        }
        if(ch==8)
        {
           if(i>0)
           {
             i--;
           }
           for(j=0;j<i;j++)
           {cha=*(Name+j);
             putchar(cha);
           }
         }
   }while(ch!= 13);
   *(Name+i)='\0';
}
