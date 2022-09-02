#include <stdio.h>
#include <string.h>
int main()
{
    int a=98;
    int *ptr; //this is a wild pointer.
    // this is not a good thing to do.
    ptr=&a;
    // now the value of *ptr is 98.
    printf("The value of a is %d",*ptr);
    return 0;
}