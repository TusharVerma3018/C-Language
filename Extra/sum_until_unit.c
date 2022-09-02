#include <stdio.h>
#include <string.h>
int main()
{
    int n,r,s=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    start:
    while(n>0)
    {
        r=n%10;
        s+=r;
        n/=10;
    }
    if(s>9)
    {
        n=s;
        s=0;
        goto start;
    }
    else
    {
        goto end;
    }
    end:
    printf("Sum = %d", s);
    return 0;
}























// #include<stdio.h>
// void main()
// {
// int rem,n,sum=0;
// printf("Enter the number ");
// scanf("%d", &n);
// LOOP:
// while(n!=0)
//         {
//         rem=n%10;
//         sum+=rem;
//         n/=10;
//         }
// if (sum<=9)
//         goto EXIT;
// else
//         {
//         n=sum;
//         sum=0;
//         goto LOOP;
//         }
// EXIT:printf("Sum = %d", sum);
// }
