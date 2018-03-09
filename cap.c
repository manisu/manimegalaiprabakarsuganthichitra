#include<stdio.h>
void main()
{
int str[20],i;
printf("\n enter the string");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
if(i==0)
{
str[i]=toupper(str[i]);
}
if(str[i]==' ')
{
str[i+1]=toupper(str[i+1]);
}
}
printf("\n%s",str);
getch();
}
