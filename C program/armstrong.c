#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n, no, counter = 0, rem, sum = 0;
    printf("Enter the Number:");
    scanf("%d", &n);
    no = n;
    // while (no != 0)
    // {
    //     no = no / 10;
    //     counter++;
    // }
    // printf("Number of digits are %d\n", counter);

    // counter = 3;

    while (no != 0)
    {
        rem = no % 10;
        sum = sum + pow(rem, 3);
        no = no / 10;
    }
    if (sum == n)
    {
        printf("This is armstrong Strong Number\n");
    }
    else
    {
        printf("This is not armstrong Strong Number\n");
    }

    return 0;
}