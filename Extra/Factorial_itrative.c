#include <stdio.h>
#include <string.h>
int main()
{
    int temp=1,n;
    printf("Enter the Number of factorial you want: ");
    scanf("%d",&n);
    if(n>=1)
    {
    for(int i=1;i<=n;i++)
    {
        temp=temp*i;
    }
    printf("The factorial of number %d is %d ",n,temp);
    }
    else if(n<0)
    {
        printf("Please Enter the Valid Number");
    }

    return 0;
}