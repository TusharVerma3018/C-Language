#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter the no. of rows:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j > n - i && j < n + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}