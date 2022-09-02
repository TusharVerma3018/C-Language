#include <stdio.h>
#include <string.h>
int main()
{
    int x=0,y;
    while (x <= 5)
    {
        y=0;
        while(y <= 5)
        {
            printf("%d ",y);
            y=y+1;
        }
        printf("\n");
        printf("%d ",x);
        x=x+1;
    }
    return 0;
}