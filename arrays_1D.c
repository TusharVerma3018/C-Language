#include<stdio.h>
int main()
{
   // printf("hello world");
   int marks[4];
   for (int i = 0; i < 4; i++)
   {
       printf("enter the value of %d element of the array\n",i);
       scanf("%d",&marks[i]);
   }
   for (int i = 0; i < 4; i++)
   {
       printf("enter the value of %d element of the arrays %d\n",i,marks[i]);
   }
    return 0;
}
