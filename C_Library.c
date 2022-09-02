#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Tushar";
    char s2[]="Keshav";
    char s3[54];
    printf("The strcmp for s1,s2 returned %d\n",strcmp(s1,s2));
    // puts(strcat(s1,s2));
    printf("The combined string of s1 and s2 is %s\n",strcat(s1,s2));
    printf("The length of s1 is %d\n",strlen(s1));
    printf("The length of s2 is %d\n",strlen(s2));
    printf("The reversed string  s1 is %s\n",strrev(s1));
    printf("The reversed string  s2 is %s\n",strrev(s2));
    strcpy(s3,strcat(s1,s2));
    puts(s3);
    return 0;
}
