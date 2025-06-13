#include<conio.h>
#include<stdio.h>
void main()
{
char username[30];
char pass[30];

int choice;
clrscr();
printf("Enter the username=");
scanf("%s",&username);
printf("\nEnter the password=");
scanf("%s",&pass);
if(strcmp(username,"admin")==0 && strcmp(pass,"admin007")==0)
 {
 printf("\n\t\tWELCOME ADMIN!!!");
 printf("\n1)view available file 2)Add files 3)remove user");
 printf("\nEnter your choice=");
 scanf("%d",&choice);
 if(choice==1)
 {
 printf("\nLet us c\nHarry potter\nThe Da Vinci Code \n1984\nInited minds\nEXITING....");
 }
 else if(choice==2)
 {
 printf("\nThe files where added succesfully!!!\nEXITING....");
 }
 else if(choice==3)
 {
 printf("\nThe User had been removed succesfully\nEXITING...");
 }
 else
 {
 printf("\nYou have entered a invalid choice\nEXITING....");
 }
 }
 else
 {
 printf("\n\t\tWELCOME USER!!!");
 printf("\n1)view availabe books 2)Borrow books 3)Return books");
 printf("\nEnter the choice=");
 scanf("%d",&choice);
 if(choice==1)
 {
 printf("\nLet us c\nHarry potter\nThe Da Vinci Code \n1984\nInited minds\nEXITING....");
 }
 else if(choice==2)
 {
 printf("\nThe books had been borrowed succesfully\nEXITING....");
 }
 else if(choice==3)
 {
 printf("\nThe books had been returned succesfully\nEXITING....");
 }
 else
 {
 printf("\nYou have entered a wrong choice\nEXITING....");
 }
 }


getch();
}
