#include <stdio.h>
#include <string.h>
int main()
{
    int i,j;
    for(int i=1 ; i<=6 ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}