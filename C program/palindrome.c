#include <stdio.h>
#include <string.h>
int main()
{
    int num, rem, sum = 0, n;
    printf("Enter the number:");
    scanf("%d", &num);
    n = num;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum * 10 + rem;
        n /= 10;
    }
    if (num == sum)
    {
        printf("The number is palindrome\n");
    }
    else
    {
        printf("This is not a palindrome number\n");
    }

    return 0;
}