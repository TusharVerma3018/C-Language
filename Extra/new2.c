#include <stdio.h>
#include <string.h>
int main()
{
    int n1,n2,s,t;
    printf("Enter the current Year:");
    scanf("%d",&n1);
    printf("Enter the Year in which employee joined the orgainzation:");
    scanf("%d",&n2);
    printf("Enter the basic salary of an employee:");
    scanf("%d",&s);
    if(n1-n2>5)
    {
        t=s*20/100;
        s=s+t;
        printf("After adding Bonus salary of an employee:%d",s);
    }
    else
    {
        t=s*10/100;
        s=s+t;
        printf("After adding Bonus salary of an employee:%d",s);
    }


    return 0;
}