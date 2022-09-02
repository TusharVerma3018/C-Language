#include <stdio.h>
#include <string.h>
int factorial(int number)
{
    if (number==0 || number==1)
    {
        return 1;
    }
    else
    {
        return (number * factorial (number-1));
    }
}
int main()
{
    int num;
    printf("Enter the number of factorial you want:");
    scanf("%d",&num);
    printf("The Factorial of %d is %d\n",num,factorial(num));
    return 0;
}