#include <stdio.h>
#include <string.h>
int main()
{
    // int y=0;
    // int x=(~y==-1);
    // printf("%d",x);

    // char str1[20]="Hello";
    // char str2[20]=" World";
    // printf("%s",strcpy(str2,strcat(str1,str2)));

    int i=12;
    int j = sizeof(i++);
    printf("%d %d",i,j);
    return 0;
}