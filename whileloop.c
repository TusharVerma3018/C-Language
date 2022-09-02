#include<stdio.h>
int main()
{
    int num,i=0;
    printf("enter a number\n");
    scanf("%d",&num);
    
    while (i<num)
    {
        printf("%d\n",i);
        i=i+1;
    }
    return 0;
}
