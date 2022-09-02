#include <stdio.h>
// #include <string.h>
int main()
{
    FILE *ptr=NULL;
    char string[34]="Here is Tushar";
    // char string[34]; //this is used for only read mode beacuse it is a null string

    // ****READING A FILE****
    // ptr=fopen("read.txt","r");
    // fscanf(ptr,"%s",string);      // In write mode all the content will copies from txt file to string (str)
    // printf("The content of the file has %s\n",string);

    // ****WRITING A FILE****
    ptr=fopen("read.txt","w");
    fprintf(ptr,"%s",string);      // In write mode all the content will erase and copies the string you write in string (str)

    // ****ABENDEND A FILE****
    ptr=fopen("read.txt","a");
    fprintf(ptr,"%s",string);      // In abendend mode all the content will remains and also copies the string you write in string (str) in last

    return 0;
}