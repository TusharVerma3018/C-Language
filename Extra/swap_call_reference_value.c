                                       /* call by reference */

// #include <stdio.h>
// #include <string.h>
// int swap(int *a,int *b)
// {
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main()
// {
//     int a,b;
//     printf("Enter the value of a and b\n");
//     scanf("%d %d",&a,&b);
//     printf("The value of a and b before swaping are %d and %d\n",a,b);
//     swap(&a,&b);
//     printf("The value of a and b after swaping are %d and %d",a,b);
    
//     return 0;
// }


                                      /* call by value example */
 
// #include <stdio.h>
// #include <string.h>
// int swap(int x,int y)
// {
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
//     printf("The value of a and b after swapping are %d and %d\n",x,y);
// }
// int main()
// {
//     int a,b;
//     printf("Enter the value of a and b:");
//     scanf("%d %d",&a,&b);
//     printf("The value of a and b are %d and %d\n",a,b);
//     swap(a,b);
//     printf("The value of a and b are remains same due to call by value %d and %d",a,b);
//     return 0;
// }