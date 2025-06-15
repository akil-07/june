#include<stdio.h>
#include<conio.h>
void main()
{
int x[30],i,n,max,min;
clrscr();
printf("\nEnter the number of elements=");
scanf("%d",&n);
printf("\nEnter %d numbers below\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
max=min=x[0];
for(i=1;i<n;i++)
{
if(x[i]>max)

max=x[i];

if(x[i]<min)

min=x[i];

}
printf("\nbiggest number=%d",max);
printf("\nSmallest number=%d",min);
getch();
}
