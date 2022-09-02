#include <stdio.h>
#include <string.h>
int main()
{
    int n, no, rem, fac, sum = 0;
    printf("Enter the Number:");
    scanf("%d", &n);
    no = n;
    while (n > 0)
    {
        rem = n % 10;
        fac = 1;
        for (int i = 1; i <= rem; i++)
        {
            fac = fac * i;
        }
        sum = sum + fac;
        n /= 10;
    }

    if (sum == no)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not a Strong Number");
    }

    return 0;
}