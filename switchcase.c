#include<stdio.h>
int main()
{
    int age;
    printf("enter a number:\n");
    scanf("%d",&age);
    switch (age)
    {
    case 1:
        printf("your age is 1\n");
        break;
    case 11:
        printf("your age is 11\n");
        break;
    case 21:
        printf("your age is 21\n");
        break;
    
    default:
        printf("your age is not 1 , 11 nor 21\n");
        break;
    }
    return 0;
}
