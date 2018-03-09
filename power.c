#include<stdio.h>
void main()
{
int n=1,k,i;
printf("\n enter the numbers");
scanf("%d\t%d",&n,&k);
for(i=1;i<k;i++)
{
n=n*k;
}
printf("%d",n);
getch();
}
