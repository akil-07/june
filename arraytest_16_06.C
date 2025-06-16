#include<stdio.h>
#include<conio.h>
void main()
{
int sreg[50],n,i,mark;
char sname[100][100];
clrscr();
printf("Enter the number of students=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\nEnter the %d student name=",i);
scanf("%s",sname[i]);
printf("\nEnter the student mark=");
scanf("%d",&sreg[i]);
}
printf("\nStudent names are saved succesfully!!!");
printf("\nEnter the student's number to get marks=");
scanf("%d",&mark);
if(mark<=sreg[i])
{
printf("\nThe name of the student=%s",&sname[mark]);
printf("\nThe mark of the student=%d",sreg[mark]);
}

getch();
}
