#include <stdio.h>
#include <string.h>
int sum(int a,int b)
{
    return a + b;
}
int main()
{
    int a=23,b=45,c;
    c=sum(a,b);
    printf("%d",c);
    return 0;
}