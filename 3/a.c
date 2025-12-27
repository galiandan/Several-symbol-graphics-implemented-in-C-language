#include <stdio.h>

int main()
{
    int i,j,n,space,max,count;
    scanf("%d",&n);

    max=(n+1)/2;

    for(i=max;i>=1;i--)
    {
        space=max-i;
        count=2*i-1;

        for(j=0;j<space;j++)
        {
            printf(" ");
        }
        for(j=0;j<count;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    for(i=2;i<=max;i++)
    {
        space=max-i;
        count=2*i-1;

        for(j=0;j<space;j++)
        {
            printf(" ");
        }
        for(j=0;j<count;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}