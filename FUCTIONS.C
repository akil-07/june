#include<conio.h>
#include<stdio.h>
int add()
{
int a,b,c;
clrscr();
printf("Enter a value=");
scanf("%d",&a);
printf("\nEnter a second value=");
scanf("%d",&b);
c=a+b;
return c;
}
void main()
{
printf("\n
%d", add());
getch();
}