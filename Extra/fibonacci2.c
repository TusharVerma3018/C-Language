#include <stdio.h>
#include <string.h>
int main()
{
    int n, a = 0, b = 1, c, i;
    printf("Enter the Range:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        /* code */
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}