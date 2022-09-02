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
        return (fib(n - 1) + fib(n - 2));
    }
}
int main()
{
    int number;
    printf("Fibonacci Series\n");
    printf("Enter the Range:");
    scanf("%d", &number);
    printf("At index %d fibonaci series is %d", number, fib(number));
    return 0;
}