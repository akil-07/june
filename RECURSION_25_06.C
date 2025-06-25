#include<conio.h>
#include<stdio.h>
int fact(int n)
{
if(n<=1)
{
return 1;
}
return n*fact(n-1);
}
void main()
{
int n,c;
clrscr();
printf("Enter a number=");
scanf("%d",&n);
c=fact(n);
printf("%d", c);
getch();
}
