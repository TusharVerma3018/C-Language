#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int result[2][2],sum=0;
    int a[2][2]={{1,2},{1,2}};
    int b[2][2]={{1,2},{1,2}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            // claculate the result
            for(int k=0;k<2;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            result[i][j]=sum;
            sum=0;

        }
    }
    // print the resultant matrix 
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            // print the result
            printf("%d \t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}