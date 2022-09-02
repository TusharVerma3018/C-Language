#include <stdio.h>
#include <string.h>
int main()
{
    int x,y;
    x=0;
    do
    {
        y=0;
        do
        {
            printf("%d",y);
            y++;
        }
        while(y<=5);
        printf("\n");
        printf("%d",x);
        x++;
    }while(x<=5);
    return 0;
}