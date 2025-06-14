#include<conio.h>
#include<stdio.h>
void main()
{
int u,n,i;
clrscr();
printf("Enter a number to multiply from 1 to 10=");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
printf("%d X %d = %d\n",n,i,n*i);
}
getch();
}
