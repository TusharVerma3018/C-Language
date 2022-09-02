#include <stdio.h>
#include <string.h>
int returnMax(int array[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}
int main()
{
    int n;
    printf("Enter the arr range:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The %d element of array is %d\n", i, arr[i]);
    }
    int max = returnMax(arr, n);
    printf("The largest number in array is %d\n", max);

    return 0;
}