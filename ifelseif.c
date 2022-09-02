#include<stdio.h>
int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    printf("you have entered %d as your age\n",age);
    if (age>=18)
    {
        printf("you can vote\n");
    }
    else if (age>=10)
    {
        printf("you can vote after some years because you are in teen age\n");
    }
    else
    {
        printf("you cannot vote\n");
    }
    return 0;
}