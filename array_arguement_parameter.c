#include <stdio.h>
int func(int array[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("the value at %d element is %d\n", i, array[i]);
    }
    array[0] = 29; //very important point that if you change any value here,it gets reflected in main()
    return 0;
}
int main()
{
    int arr[] = {1, 2, 3};
    func(arr);
    printf("the value at 0 elemnt is %d\n", arr[0]);
    return 0;
}
