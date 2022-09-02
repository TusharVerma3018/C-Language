#include <stdio.h>
#include <string.h>
int newnumber(int*a,int*b)
{
    int t,p;
    t=*a;
    p=*b;
    *a=t+p;
    *b=p-t;
}
int main()
{
    int a=3,b=4;
    printf("The value of a and b are %d and %d\n",a,b);
    newnumber(&a,&b);
    printf("The value of a and b now are %d and %d",a,b);
    return 0;
}