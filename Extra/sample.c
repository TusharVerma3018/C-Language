#include <stdio.h>
#include <string.h>
int main()
{
  int a=14;
//   while(a<20)
//   {
//     ++a;
//     if(a>=16 && a<=18)
//     {
//       continue;
//     }
//     printf("%d ", a);
//   }

  for(a=15;a<20;a++)
  {
      if(a>=16 && a<=18)
    {
      continue;
    }
     printf("%d ", a);
  }
 return 0;
}
    