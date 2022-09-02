#include <stdio.h>
#include <string.h>
void starpattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void reversestarpattern(int n)
{
    for (int i = n; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    int number;
    printf("Enter the following:\n 0 to get the Triangle: \n 1 to get reversed Triangle: \n 2 to quit the program\n ");
    scanf("%d", &number);

    switch (number)
    {
    case 0:
        printf("Enter the No. of rows of pattern you want:");
        scanf("%d", &n);
        starpattern(n);
        break;

    case 1:
        printf("Enter the No. of rows of pattern you want:");
        scanf("%d", &n);
        reversestarpattern(n);
        break;

    case 2:
        printf("You are Quitting the program.......");
        goto end;
    default:
        printf("You have entered an invalid number");
    }
end:
    return 0;
}