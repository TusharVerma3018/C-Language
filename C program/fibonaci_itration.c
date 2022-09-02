#include <stdio.h>
#include <string.h>
int main()
{
    int a = 0, b = 1, n, result;
    printf("Enter the index number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        result = a + b;
        a = b;
        b = result;
    }

    return 0;
}