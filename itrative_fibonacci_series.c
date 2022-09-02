#include<stdio.h>

int fib_itrative(int n)
{
    int a=0;
    int b=1;
    for (int i = 0; i < n-1; i++)
    {
        b=a+b;
        a=b-a;
    }
    
    return a;
}
int main()
{
    int number;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d",&number);
    printf("The value of fibonacci number at position no %d using itrative approach is %d\n",number,fib_itrative(number));
    return 0;
}