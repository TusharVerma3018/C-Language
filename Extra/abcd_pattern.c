#include <stdio.h>
#include <string.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        char c='A';
        for(int j=1;j<=i;j++)
        {
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}