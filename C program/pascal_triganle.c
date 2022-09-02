// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int n = 6, temp;
//     for (int i = 0; i < 6; i++)
//     {
//         for (int s = 0; s < 6 - i; s++)
//         {
//             printf(" ");
//         }
//         temp = 1;
//         for (int j = 0; j <= i; j++)
//         {
//             printf(" %d", temp);
//             temp = temp * (i - j) / (j + 1);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// if (j == 1)
// {
//     temp = 1;
// }
// else
// {
//     temp = (temp * i - j + 1) / j;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    int n = 6, temp;
    for (int i = 0; i < 6; i++)
    {
        for (int s = 0; s < 6 - i; s++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
            {
                temp = 1;
            }
            else
            {
                temp = temp * (i - j + 1) / j;
            }
            printf(" %d", temp);
        }
        printf("\n");
    }
    return 0;
}
