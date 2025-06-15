#include<conio.h>
#include<stdio.h>
void main()
{
int avg,total=0,n,mark,i,max=0,min=100;
clrscr();
printf("Enter the number of students=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\nEnter the mark of student %d=",i);
scanf("%d",&mark);
total+=mark;
if(mark>max)
{
max=mark;
}
else
{
min=mark;
}
}
avg=total/n;
printf("\nThe total marks=%d",total);
printf("\nThe avarage marks=%d",avg);
printf("\nThe minimum mark of the class is %d",min);
printf("\nThe maximum mark of the class is %d",max);
getch();
}
