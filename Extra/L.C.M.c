#include <stdio.h>
#include <string.h>
int main()
{
    int n1,n2,x,y,LCM;
    printf("Enter the 1st Number:");
    scanf("%d",&n1);
    x=n1;
    printf("Enter the 2nd Number:");
    scanf("%d",&n2);
    y=n2;
    while(n1!=n2)
    {
        if(n1>n2)
        {
            n1=n1-n2;
        }
        else
        {
            n2=n2-n1;
        }
    }
    printf("Highest Common Factor(H.C.F)=%d\n",n1);
    // We know that L.C.M= n1Xn2/H.C.F
    LCM=x*y/n1;
    printf("Least Common Multiple(L.C.M)=%d",LCM);
    return 0;
}