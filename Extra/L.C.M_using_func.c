#include <stdio.h>
#include <string.h>
void func(int n1, int n2)
{
    int LCM, a, b;
    a = n1;
    b = n2;
    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 = n1 - n2;
        }
        else
        {
            n2 = n2 - n1;
        }
    }
    printf("Highest Common Factor(H.C.F)=%d\n", n1);
    // We know that L.C.M= n1Xn2/H.C.F
    LCM = a * b / n1;
    printf("Least Common Multiple(L.C.M)=%d", LCM);
}

int main()
{
    int n1, n2, x, y, LCM;
    printf("Enter the 1st Number:");
    scanf("%d", &x);
    printf("Enter the 2nd Number:");
    scanf("%d", &y);
    func(x, y);

    return 0;
}