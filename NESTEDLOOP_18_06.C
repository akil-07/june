#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("Enter the number=");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
printf("\nOuter loop=%d",i);
for(j=1;j<=n;++j)
{
printf("\ninner loops=%d",j);
}
}
getch();
}
