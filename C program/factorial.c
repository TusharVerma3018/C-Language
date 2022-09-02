#include <stdio.h>
#include <string.h>
int main()
{
    int n, temp = 1;
    printf("Enter the number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        temp = temp * i;
    }
    printf("Factorial of %d is %d", n, temp);
    return 0;
}