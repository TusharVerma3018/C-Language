#include <stdio.h>
#include <math.h>
int main()
{
    int num,oct=0,base=1,rem;
    printf("Enter the number in Decimal form :");
    scanf("%d",&num);
    while(num>0)
    {
    rem = num % 8;
    oct = oct + base * rem;
    num/= 8;
    base = base * 10;
    }
    printf("The number in octal form is : %d",oct);
    return 0;
}