#include <stdio.h>
#include <string.h>
void printstr(char name[])
{
    int i=0;
    while(name[i]!='\0')
    {
        printf("%c",name[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[]={'t','u','s','h','a','r','\0'};
    // char str[6]="harry";
    // printstr(str);
    char name[50];
    gets(name);
    printf("Using custom function printstr\n");
    printstr(name);
    printf("Using Printf\n");
    printf("%s\n",name);
    printf("using puts\n");
    puts(name);
    return 0;
}