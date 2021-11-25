#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
struct{
   char name[25];
   char phone[25];
   char address[50];
   char email[25];
}c;
FILE *fp;
FILE *fp1;
int add_contact();
int view_contact();
int delete_contact();
int search_contact();
int edit_contact();
