#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int n,i;
char str[100],str1[100],str2[100],str3[100];
clrscr();
printf("\nEnter a string=");
scanf("%s", &str);
printf("\nEnter a string2=");
scanf("%s", &str1);
strcat(str,str1);
printf("%s",str);
printf("\nEnter a string3= ");
scanf("%s",&str2);
printf("\nEnter string 4=");
scanf("%s",&str3);
printf("\n%s",strrev(str2));
printf("\nLength of the string is %d",strlen(str3));
getch();
}