#include <stdio.h>
#include <string.h>
int main()
{
    int n, rem;
    printf("Enter the year:");
    scanf("%d", &n);
    rem = n % 4;
    if (rem == 0)
    {
        printf("Enter year is a leap year");
    }
    else
    {
        printf("Enter year is not a leap year");
    }

    return 0;
}