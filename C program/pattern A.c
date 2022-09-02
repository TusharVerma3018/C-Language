/*Printing Pattern
 A
 A B
 A B C
 A B C D*/
#include <stdio.h>
int main()
{
        for (int i = 0; i < 4; i++)
        {
                char c = 'A';
                for (int j = 0; j <= i; j++)
                {
                        printf(" %c", c);
                        c++;
                }
                printf("\n");
        }
        return 0;
}