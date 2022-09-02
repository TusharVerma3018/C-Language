#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    // int n1, n2, n3;
    // printf("Enter the no.");
    // scanf("%d", &n1);
    // printf("Enter the no.");
    // scanf("%d", &n2);
    // n3 = pow(n1, n2);
    // printf("answer is %d", n3);

    int m, n, val = 1;
    printf("Enter the no.");
    scanf("%d", &m);
    printf("Enter the no.");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        val = val * m;
    }
    printf("answer is %d", val);
    return 0;
}