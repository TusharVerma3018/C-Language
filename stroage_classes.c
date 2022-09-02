/* USE OF STATIC KEYWORD */

// #include <stdio.h>
// #include <string.h>
// int func(int a,int b)
// {
//     static int my_var;
//     my_var ++;
//     printf("The my_var is %d\n",my_var);
//     return my_var;
// }
// int main()
// {
//     int a;
//     int my_var = func(5,3);
//     my_var = func(5,3);
//     my_var = func(5,3);
//     my_var = func(5,3);
//     return 0;
// }

/* USE OF EXTERN KEYWORD */
#include <stdio.h>
#include <string.h>
int func(int a,int b)
{
    extern int sum;
    // sum=a+b;
    return sum;
}
int sum=988;
int main()
{
    int sum=func(5,3);
    printf("The sum is %d\n",sum);
    return 0;
}