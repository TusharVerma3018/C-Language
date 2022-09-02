#include <stdio.h>
#include <string.h>
int main()
{
    int x, sum = 0;
    printf("Enter the number:");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        sum = sum + i;
        printf(" %d +", i);
    }
    printf("\b= %d", sum);

    return 0;
}