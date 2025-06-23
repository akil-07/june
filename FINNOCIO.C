#include<conio.h>
#include<stdio.h>
void main()
{
int c=0,a=0,b=1,n,i;
clrscr();
printf("Enter a range=");
scanf("%d",&n);
for(i=0;i<=n;)
{
a=b;
b=i;
i=a+b;
c=i;
if(c<=n)
{
printf("%d\n", i);
}
}
getch();
}