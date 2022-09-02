#include <stdio.h>
#include <string.h>
int main()
{
    int a = 12;
    int *p = &a;
    printf("The address of p to a is %p\n", &p);
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", p);
    printf("The value of a is %d\n", *p);
    printf("The value of a is %d\n", a);
    return 0;
}