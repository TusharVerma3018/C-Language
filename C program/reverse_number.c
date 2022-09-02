#include <stdio.h>
#include <string.h>
int main()
{
    int n, t, rem, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    t = n;
    while (t != 0)
    {
        rem = t % 10;
        sum = sum * 10 + rem;
        t = t / 10;
    }
    printf("Reverse number : %d", sum);
    return 0;
}