#include<stdio.h>
int main()
{
    int arr[]={1,2,3};
    printf("the address of first element of the array is %d\n",&arr[0]);
    printf("the address of first element of the array is %d\n",arr);
    printf("the address of second element of the array is %d\n",&arr[1]);
    printf("the address of second element of the array is %d\n",arr+1);

    printf("the value at position 1 of the array is %d\n",*(&arr[0]));
    printf("the value at position 1 of the array is %d\n",arr[0]);
    printf("the value at position 1 of the array is %d\n",*(arr));
    printf("the value at position 2 of the array is %d\n",*(&arr[1]));
    printf("the value at position 2 of the array is %d\n",arr[1]);
    printf("the value at position 2 of the array is %d\n",*(arr+1));
    
    return 0;
}