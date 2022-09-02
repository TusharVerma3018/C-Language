#include <stdio.h>
#include <string.h>
int main()
{
    int n, c = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            c = 1;
            goto end;
        }
        else
        {
            c = 0;
        }
    }
end:
    if (c == 1)
    {
        printf("Entered number is not prime");
    }
    else
    {
        printf("Entered number is prime");
    }

    return 0;
}