#include <stdio.h>

int main()
{
    int i,n,j,space;
    scanf("%d",&n);

    for(i=1;i<=n;i+=2)
    {
        space=(n-i)/2;

        for(j=0;j<space;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=n-2;i>=1;i-=2)
    {
        space=(n-i)/2;

        for(j=0;j<space;j++)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


