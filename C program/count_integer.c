#include <stdio.h>
#include <string.h>
int main()
{
    int n, count, counter = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        counter++;
    }
    printf("No. of digits are %d", counter);
    return 0;
}