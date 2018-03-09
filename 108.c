#include<stdio.h>
int main()
{
	int a,b,c,ap,s=0,i;
	printf("\n enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	ap=a;
	for(i=0;i<c;i++)
	{
		printf("%d",ap);
		s=s+ap;
		ap=ap+b;
	}
printf("\nthe sum is %d",sum);
return 0;
}
