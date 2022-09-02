#include <stdio.h>
#include <string.h>
int main()
{
    int a=32;
    // int *ptr=&a;
    int *ptr=0; // now *ptr is a null pointer
    if(ptr!=0)
    {
        printf("The value of a is %d",*ptr);
    }
    else
    {
        printf("Pointer is a null pointer");
    }
    return 0;

}