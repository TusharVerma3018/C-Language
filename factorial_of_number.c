#include<stdio.h>
 int factorial(int number)
 {
    if (number<=1) // or it can be written as if(number==0 || number==1)
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
    printf("enter a number you want to factorial of:\n");
    scanf("%d",&num);
    printf("factorial of %d is %d\n",num,factorial(num));
    return 0;
}
