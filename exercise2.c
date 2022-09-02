#include<stdio.h>
int main()
{
    char input;
    float kmsToMiles=0.621;
    float inchesToFoot=0.083;
    float cmsToInches=0.393;
    float first,second;
    while (1)
    {
      printf(" enter the input character\n .q to quit\n 1.kmsToMile\n 2.inchesToFoot\n 3.cmsToInches\n");
   scanf(" %c",&input);
   switch (input)
   {
   case 'q' :
       printf("quitting the program....\n");
       goto end;
       break;
   case '1' :
       printf("enter your quantity in terms of Kms\n");
       scanf("%f",&first);
       second = first * kmsToMiles;
       printf("%f kms is equals to %f Miles\n",first,second);
       break; 
   case '2' :
       printf("enter your quantity in terms of cms\n");
       scanf("%f",&first);
       second = first * cmsToInches;
       printf("%f cms is equals to %f Inches\n,first,second");
       break; 
   case '3' :
       printf("enter your quantity in terms of cms\n");
       scanf("%f",&first);
       second = first * cmsToInches;
       printf("%f cms is equals to %f Inches\n",first,second);
       break; 
   default:
       break;
   }
    }end:
    return 0;
}
