/* 1+2+4+7+11+16+......... */
#include <stdio.h>
#include <string.h>
int main()
{
    // int n,a=1,sum=0;
    // printf("Enter the Range:");
    // scanf("%d",&n);
    // for(int i=0;i<n;i++)
    // {
    //     a=a+i;
    //     sum=sum+a;
    // }
    // printf("The value is %d",sum);

    int n, a = 1, sum = 0;
    printf("Enter n terms:");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        a = a + i;
        printf("%d + ", a);
        sum = sum + a;
    }
    printf("\b\b = %d", sum);

    return 0;
}