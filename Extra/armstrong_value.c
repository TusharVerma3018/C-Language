#include <stdio.h>
#include <math.h>
int main()
{
    // int a,n,r,s=0;
    // printf("Enter a Number:");
    // scanf("%d",&n);
    // a=n;
    // while(n>0)
    // {
    //  r=n%10;
    //  s=s+pow(r,3);
    //  n=n/10;
    // }
    // if(a==s)
    //     printf("This is a valid armstrong number\n");
    // else
    // printf("This is not valid armstrong Number");

    int n,r,s=0,a;
    printf("Enter the Number:");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        r=n%10;
        s=s+pow(r,3);
        n=n/10;
    }
    if(a==s)
    printf("This is a valid armstrong number\n");
    else
    printf("This is not valid armstrong Number");

    return 0;
}