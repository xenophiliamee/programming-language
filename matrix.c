#include <stdio.h>
int main()
{
    int a[3][3], i, j;
    for (i =)
        a[0][0] = 3;
    a[0][1] = 2;
    a[0][2] = 3;
    a[1][0] = 6;
    a[1][1] = 2;
    a[1][2] = 6;
    a[2][0] = 5;
    a[2][1] = 6;
    a[2][2] = 5;
    for (i = 0; i <= 2; i++)
    {
        printf("this is %d row\n", i);
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}