#include<conio.h>
#include<stdio.h>
void main()
{
int x,i=1,fact=1;
clrscr();
printf("\nEnter the first number=");
scanf("%d",&x);
while(i<=x)
{
fact=fact*i;
i++;
}
printf("\nThe factorial of %d is %d ",x,fact);
getch();
}
