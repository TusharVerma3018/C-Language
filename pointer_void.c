#include <stdio.h>
#include <string.h>
int main()
{
    int a=9;
    int b=8;
    void* ptr;
    ptr=&a;
    printf("The value of a is %d\n",*((int*)ptr));
    ptr=&b;
    printf("The value of b is %d\n",*((int*)ptr));
    return 0;
}