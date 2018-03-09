#include <stdio.h>
int main()
{
    int a[5],i,mini;
    printf("enter values");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]<mini)
        {
            mini=a[i];
        }
    }
    printf("%d",mini);

    return 0;
}
