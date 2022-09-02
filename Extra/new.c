#include <stdio.h>
#include <string.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<30)
    {
        if(num %2 == 0)
        {
            num=num+2;
            printf("The number is %d",num);
        }
        else
        {
            num=num+1;
            printf("The number is %d",num);
        }
    }
    else
    {
        printf("The number is %d",num);
    }
    return 0;
}