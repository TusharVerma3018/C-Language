#include <stdio.h>
#include <string.h>
int main()
{
    int n, rem, sum = 0, no;
    printf("Enter the Number:");
    scanf("%d", &n);
    no = n;
    for (int i = 1; i < n; i++)
    {
        rem = n % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == no)
    {
        printf("perfect number");
    }
    else
    {
        printf("Not a perfect number");
    }
    return 0;
}