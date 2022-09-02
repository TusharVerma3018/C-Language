// *
// **
// ***
// ****
// #include <stdio.h>
// #include <string.h>
//          int
//          main()
// {
//     int n;
//     printf("Enter the no. of rows");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter the no. of rows:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == 4 || j == 4)
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
    return 0;
}
