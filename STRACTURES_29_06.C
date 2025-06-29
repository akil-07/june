#include<conio.h>
#include<stdio.h>
#include<string.h>
struct book
{
char bname[50];
int date;
char auth[50];
float price;
};
int main()
{
struct book hp;
clrscr();
hp.date=1997;
hp.price=55.5;
strcpy(hp.bname,"Harry Potter");
strcpy(hp.auth,"Jk Rowling");
printf("%s\n",hp.bname);
printf("%s\n",hp.auth);
printf("%d\n",hp.date);
printf("%f\n", hp.price);
getch();
return 0;
}
