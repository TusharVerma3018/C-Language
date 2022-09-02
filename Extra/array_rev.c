#include <stdio.h>
void arrrev(int arr[])
{
    int temp;
    for(int i=0; i<2; i++)
    {
        temp = arr[i];
        arr[i] = arr[3-i];
        arr[3-i] = temp;
    }
}

void printarr(int arr[])
{
    for(int i=0; i<4; i++)
    {
        printf("The value of array at %d is %d\n",i,arr[i]);
    }
}

int main()
{
    int arr[]={1,2,3,4};
    printf("Before Reversing the array\n");
    printarr(arr);
    arrrev(arr);
    printf("After Reversing the array\n");
    printarr(arr);
    return 0;
}

