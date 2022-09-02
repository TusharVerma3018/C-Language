// 1*2 + 2*2 + 3*2 +......+n*2 series

#include <stdio.h>
#include <string.h>
int main()
{
    int n, rem = 0;
    printf("Enter the Range:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        rem = rem + i * 2;
        printf("%d*2 + ", i);
    }
    printf("\b\b= %d", rem);
    return 0;
}

// 0, 1, 3, 6, 10, 15,
/*
#include <stdio.h>
#include <string.h>
    int main()
{
    int n, sum = 0;
    printf("Enter the Range:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sum = sum + i;
        printf(" %d,", sum);
    }
    return 0;
}
*/

// 0, 3, 8, 15, 24, 35, 48, 63, 80, 99,
/*
#include <stdio.h>
#include <string.h>
    int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf(" %d,", i * i - 1);
    }
    return 0;
}
*/

// 1, 2, 4, 8, 16, 32, 64,
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
    int main()
{
    int temp;
    for (int i = 0; i <= 6; i++)
    {
        temp = pow(2, i);
        printf(" %d,", temp);
    }
    return 0;
}
*/

// 1, 4, 9, 16, 25, 36,
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
    int main()
{
    int temp;
    for (int i = 1; i <= 6; i++)
    {
        temp = pow(i, 2);
        printf(" %d,", temp);
    }
    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
int fac(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (n * fac(n - 1));
    }
}
int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + 1.0 / fac(i);
        return sum;
    }
}
int main()
{
    int n;
    float series;
    printf("Enter the Number : ");
    scanf("%d", &n);
    series = sum(n);
    printf("%d", series);

    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    float sum = 0.0;
    printf("Enter the Number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (1.0 / i);
    }
    printf("%f", sum);

    return 0;
}
*/
