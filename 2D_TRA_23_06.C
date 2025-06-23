#include<conio.h>
#include<stdio.h>
void main()
{
int arr[3][3],arr2[3][3],i,j;
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Enter the element=");
scanf("%d",&arr[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
arr2[i][j]=arr[j][i];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",arr2[i][j]);
}
printf("\n");
}
getch();
}
