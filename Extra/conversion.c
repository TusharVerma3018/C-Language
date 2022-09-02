#include <stdio.h>
#include <string.h>
int main()
{
    int n,yrs,a;
    printf("Enter the no. of year:");
    scanf("%d",&yrs);
    printf("choose from the following \n 1.second\n 2.minute\n 3.hour\n 4.days\n 5.week\n 6.month\n Enter Your choice:");
    scanf("%d",&n);
    switch(n)
    {
      case 1:
      a=365*24*60*60*yrs;
      printf("seconds=%d",a);
      break;
      case 2:
      a=365*24*60*yrs;
      printf("minutes=%d",a);
      break;
      case 3:
      a=365*24*yrs;
      printf("hours=%d",a);
      break;
      case 4:
      a=365*yrs;
      printf("days=%d",a);
      break;
      case 5:
      a=52*yrs;
      printf("weeks=%d",a);
      break;
      case 6:
      a=12*yrs;
      printf("months=%d",a);
      break;
      default:
      printf("Enter the valid number");
    }
    return 0;
}