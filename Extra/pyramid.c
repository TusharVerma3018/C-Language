#include <stdio.h>
#include <string.h>
int main()
{
  // int n, no, r, sp, p, t = 1;
  // printf("Enter the Number of rows \n");
  // scanf("%d", &no);
  // n = no;

  /* best one out of all these CODE WITH HARRY*/
  int n = 7;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 2 * n; j++)
    {
      if (j >= n - 1 - i && j <= n - 1 + i)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }

  // for(r=1;r<=no;r++)
  // {
  //   for(sp=1;sp<=n;sp++)
  //   {
  //     printf(" ");
  //   }
  //   n--;
  //      for(p=1;p<=t;p++)
  //      {
  //        printf("*");
  //      }
  //   t+=2;
  //   printf("\n");
  // }

  // for(r=1;r<=no;r++)
  // {
  //   for(sp=1;sp<=n;sp++)
  //   {
  //     printf(" ");
  //   }
  //   n--;
  //      for(p=1;p<=t;p++)
  //      {
  //        printf("%d",r);
  //      }
  //   t+=2;
  //   printf("\n");
  // }

  // for(r=1;r<=no;r++)
  // {
  //   for(sp=1;sp<=n;sp++)
  //   {
  //     printf(" ");
  //   }
  //   n--;
  //      for(p=1;p<=t;p++)
  //      {
  //        printf("%d",p);
  //      }
  //   t+=2;
  //   printf("\n");
  // }

  // for(r=1;r<=no;r++)
  // {
  //   for(sp=1;sp<=n;sp++)
  //   {
  //     printf(" ");
  //   }
  //   n--;
  //      for(p=t;p>=1;p--)
  //      {
  //        printf("%d",p);
  //      }
  //   t+=2;
  //   printf("\n");
  // }

  // for(r=1;r<=no;r++)
  // {
  //    for(sp=1;sp<=n;sp++)
  //    {
  //     printf(" ");
  //    }
  //     n--;
  //       for(p=1;p<=r;p++)
  //       {
  //          printf("%d ",p);
  //       }
  //     printf("\n");
  // }

  // for(r=1;r<=no;r++)
  // {
  //   for(sp=1;sp<=n;sp++)
  //   {
  //     printf(" ");
  //   }
  //     n--;
  //     for(p=1;p<=r;p++)
  //     {
  //       printf("%d ",r);
  //     }
  //   printf("\n");
  // }

  // for (r = 1; r <= no; r++)
  // {
  //   for (sp = 1; sp <= n; sp++)
  //   {
  //     printf(" ");
  //   }
  //   n--;
  //   for (p = 1; p <= r; p++)
  //   {
  //     printf("* ");
  //   }
  //   printf("\n");
  // }

  // for(r=1;r<=no;r++)
  // {
  //   for(sp=1;sp<=n;sp++)
  //   {
  //     printf(" ");
  //   }
  //     n--;
  //     for(p=1;p<=r;p++)
  //     {
  //       printf("%d ",t);
  //       t++;
  //     }
  //   printf("\n");
  // }

  return 0;
}