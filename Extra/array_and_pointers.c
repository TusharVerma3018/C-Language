#include <stdio.h>
#include <string.h>
int main()
{
    // int a = 12;
    // int *p=&a;
    // printf("%d\n",p);
    // printf("%d\n",p+1); /*p + 1 means it add size of int(4) in the address*/


    // char a = '3';
    // char *p=&a;
    // printf("%d\n",p);
    // printf("%d\n",p+1); /*p + 1 means it add size of char(1) in the address*/


    // char a = '3';
    // char *p=&a;
    // printf("%d\n",p);
    // p--;
    // printf("%d\n",p);
    // printf("%d\n",p-2);

    int arr[]={1,2,3,4,5,6,67};
    printf("Value at position 3 of the array is %d\n",arr[3]);
    printf("The Address of first element of the array is %p\n",&arr[0]);
    printf("The Address of first element of the array is %p\n",arr);
    printf("The Address of second element of the array is %p\n",&arr[1]); 
    printf("The Address of second element of the array is %p\n",arr+1); /*+1 means it add size of int(4) in the address*/

    // arr++; this line will throw an error
    
    printf("The Value at address of first element of the array is %d\n",*(&arr[0]));
    printf("The Value at address of first element of the array is %d\n",arr[0]);
    printf("The Value at address of first element of the array is %d\n",*(arr));
    printf("The Value at address of second element of the array is %d\n",*(&arr[1])); 
    printf("The Value at address of second element of the array is %d\n",arr[1]);
    printf("The Value at address of second element of the array is %d\n",*(arr+1));
    return 0;
}