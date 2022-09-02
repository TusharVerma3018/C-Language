#include<stdio.h>
int main()
{
    /* code */
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    printf("you have entered %d as your age\n",age);
    if (age>=18)
    {
        printf(" you can vote");
    }
    else if (age>10)
    {
        printf("after some year you will able to vote");
    }
    
    else
    {
         printf(" you cannot vote");
    }
    
    return 0;
}
