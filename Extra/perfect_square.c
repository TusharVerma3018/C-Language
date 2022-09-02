#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    float f,g;
    printf("Enter a Number:");
    scanf("%d",&n);
    f=sqrt(n);
    g=(int)f;
    if(f==g)
    {
        printf("%d is a Perfect Square number",n);
    }
    else
        printf("%d is not a Perfect Square number",n);
    return 0;
}