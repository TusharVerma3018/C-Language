#include <stdio.h>
#include <string.h>
int main()
{
    int d, n, rem, sum = 0;
    printf("Enter the number in decimal:");
    scanf("%d", &d);
    n = d;
    while (n != 0)
    {
        rem = n % 2;
        sum = sum + rem;
        n = n / 2;
    }
    printf("binary number:%d", sum);

    return 0;
}