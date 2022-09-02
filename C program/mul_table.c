#include <stdio.h>
#include <string.h>
int main()
{
    int x;
    printf("Enter the Number of multiplication Table you want:");
    scanf("%d", &x);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", x, i, x * i);
    }

    return 0;
}