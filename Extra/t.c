#include <stdio.h>
#include <stdlib.h>
int num;
void arrrev(int arr[])
{
    int temp;
    for (int i = 0; i = num / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[num / 2 - 1];
        arr[num / 2 - 1] = temp;
    }
}
int main()
{
    int i, arr[44];
    printf("Enter the Number of array:");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("Enter the %d element:", i);
        scanf("%d", &arr[i]);
    }
    arrrev(arr);
    for (i = 0; i < num; i++)
    {
        printf("Enter the %d element:", i);
        printf("%d", arr[i]);
    }

    /* Write the logic to reverse the array. */

    return 0;
}
