#include <stdio.h>
int main()
{
    int n, i, t, sum = 0;
    printf("Enter the Number:");
    scanf("%d", &n);
    t = n;
    for (i = 1; i < n - 1; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }
    if (sum == t)
    {
        printf("This is a perfect number");
    }
    else
    {
        printf("This is not a perfect number");
    }

    return 0;
}