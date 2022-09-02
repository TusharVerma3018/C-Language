#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter the Month Number\n");
    scanf("%d",&n);
    switch (n)
    {
        case 1:
        printf("Month Name:January\n");
        printf("Days:31");
        break;
        case 2:
        printf("Month Name:February\n");
        printf("Days:28 or 29");
        break;
        case 3:
        printf("Month Name:March\n");
        printf("Days:31");
        break;
        case 4:
        printf("Month Name:April\n");
        printf("Days:30");
        break;
        case 5:
        printf("Month Name:May\n");
        printf("Days:31");
        break;
        case 6:
        printf("Month Name:June\n");
        printf("Days:30");
        break;
        case 7:
        printf("Month Name:July\n");
        printf("Days:31");
        break;
        case 8:
        printf("Month Name:August\n");
        printf("Days:31");
        break;
        case 9:
        printf("Month Name:September\n");
        printf("Days:30");
        break;
        case 10:
        printf("Month Name:October\n");
        printf("Days:31");
        break;
        case 11:
        printf("Month Name:November\n");
        printf("Days:30");
        break;
        case 12:
        printf("Month Name:December\n");
        printf("Days:31");
        break;
    }
    return 0;
}