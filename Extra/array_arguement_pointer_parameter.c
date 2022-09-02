#include<stdio.h>
int func1(int *ptr)
{
for (int i = 0; i < 4; i++)
{
    printf("the value at %d element is %d\n",i,*(ptr+i));
}
  *(ptr)=29; //very important point that if you change any value here,it gets reflected in main()
    return 0;
}

int func2(int array[])
{
for (int i = 0; i < 4; i++)
{
    printf("the value at %d element is %d\n",i,array[i]);
}
  array[0]=29; //very important point that if you change any value here,it gets reflected in main()
    return 0;
}

int main()
{
    int arr[]={1,2,3,4};
    func1(arr);
    func2(arr);
    printf("the value at 0 elemnt is %d\n",arr[0]);
    return 0;
}
