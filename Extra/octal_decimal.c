#include <stdio.h>
#include <math.h>
int main()
{
    int num,dec=0,rem;
    printf("Enter the number in octal form :");
    scanf("%d",&num);
    for(int i=0;num!=0;i++)
    {
    rem = num % 10;
       if(rem>8)
       {
          printf("pls enter a valid number");
          goto end;
       }
    dec = dec + rem * pow(8,i);
    num/= 10;
    }
    printf("The number in decimal form is : %d",dec);
    end:
    return 0;
}