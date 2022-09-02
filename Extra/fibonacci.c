#include <stdio.h>
#include <string.h>
int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
int main()
{
    int number;
    printf("Enter the inder no. of fibonacci series\n");
    scanf("%d", &number);
    printf("The series at position number %d is as %d", number, fib(number));
    return 0;
}
