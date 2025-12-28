#include <stdio.h>

int main(void)
{
    int i, j, n, mid, start;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    mid = (n + 1) / 2;

    for (i = 1; i <= mid; i++) {
        for (j = 1; j <= mid - i; j++) 
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    start = (n % 2 == 0) ? mid : (mid - 1);
    for (i = start; i >= 1; i--) 
    {
        for (j = 1; j <= mid - i; j++)
        {
             printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
