/*#include<stdio.h>
int main()
{
   // printf("hello world");
   int marks[2][4]={{1,2,3},{4,5,6}};
   for (int i = 0; i < 2; i++)
   {  
   for (int j = 0; j < 3; j++)
   {
       printf("The value of %d,%d element of the arrays %d\n",i,j,marks[i][j]);
   }
   }
    return 0;
}
*/
// or if we want them in matrix form we have to write lower case
#include <stdio.h>
int main()
{
    // printf("hello world");
    int marks[2][4] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}