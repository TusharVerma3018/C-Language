#include<stdio.h>
// void changevalue(int*address)
// {
//     *address=345;
// }
void changevalue(int *a)
{
    *a=345;
}
int main()
{
    int a=34;
    printf("The value of a is %d\n",a);
    changevalue(&a);
    printf("The value of a is now %d\n",a);
    return 0;
}
