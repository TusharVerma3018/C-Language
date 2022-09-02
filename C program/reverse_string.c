#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "Tushar";
    printf("Before reversing the String : %s\n", s);
    // int n = 0;
    // while (s[n] != '\0')
    // {
    //     n++;
    // }
    // printf("Length of a string is %d\n", n);
    for (int i = 0; i < 3; i++)
    {
        char temp;
        temp = s[i];
        s[i] = s[5 - i];
        s[5 - i] = temp;
    }
    printf("After reversing the string : %s\n", s);
    return 0;
}