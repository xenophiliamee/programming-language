#include <stdio.h>
int main()
{
    int a[3][3], i, j;
    printf("enter 9 value");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i <= 2; i++)
    {
        // printf("this is %d row\n", i);
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}