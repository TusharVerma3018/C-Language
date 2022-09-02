#include <stdio.h>
#include <string.h>
int main()
{
  int n,rem,sum=0;
  printf("Enter the Number");
  scanf("%d",&n);
  while(n!=0)
  {
    rem=n%10;
    sum=sum+rem;
    n=n/10;
  }
  printf("The sum is %d",sum);


    // int n,rem,s=0;
    // printf("Enter a Number:");
    // scanf("%d",&n);
    // while(n!=0)
    // {
    //     rem=n%10;
    //     s=s+rem;
    //     n=n/10;
    // }
    // printf("The value is %d",s);

    return 0;
}