#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter the no. of rows:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                printf("%d", i);
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