#include<stdio.h>
int main()
{
    int num;
    printf("enter a number of multiplication table of you want\n");
    scanf("%d",&num);
    printf("your multiplication table of %d is as follows:\n",num);
    for (int i = 0; i < 11; i++)
    {
        printf("%d * %d =%d\n",num,i,num * i);
    }
    
    return 0;
}