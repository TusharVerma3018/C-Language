// #include <stdio.h>
// #include <string.h>
// int reverse(int n)
// {
//     int rem, temp = 0;
//     while (n)
//     {
//         rem = n % 10;
//         temp = temp * 10 + rem;
//         n = n / 10;
//     }
//     printf("Number:%d\n", temp);
// }
// int main()
// {
//     int n;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     reverse(n);
//     return 0;
// }

#include <stdio.h>
long reverse(long);
void main()
{
    long n, r;
    scanf("%ld", &n);
    r = reverse(n);
    printf("%ld\n", r);
}
long reverse(long n)
{
    static long r = 0;
    if (n == 0)
        return 0;
    r = r * 10;
    r = r + n % 10;
    reverse(n / 10);
    return r;
}