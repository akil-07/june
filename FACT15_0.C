#include<conio.h>
#include<stdio.h>
void main()
{
int x,n,fact=1,i;
clrscr();
printf("Enter the number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=i*fact;
}
printf("The factorial of %d is= %d",n,fact);
getch();
}
