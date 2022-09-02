#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n, rem, dec = 0;
    printf("Enter the number in binray form:");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        dec = dec + pow(2, rem);
        n /= 10;
    }
    printf("Decimal number=%d", dec);

    return 0;
}