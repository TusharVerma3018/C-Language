#include <stdio.h>
// #include <string.h>
int main()
{
    FILE *ptr=NULL;
    char string[34]="Here is Tushar";
    // ptr=fopen("read2.txt","r");                 // read mode open in only get function
    ptr=fopen("read2.txt","w");                    // write mode open in only get function

    //******fgetc function******                   // in fgetc c stands for character 
    // char c= fgetc(ptr);                         //with the help of getc we can read the character which was present in txt file
    // printf("The character I read was %c\n",c);  //it will print first character which was present in read2.txt file
    // c= fgetc(ptr);                              //with the help of getc we can read the character which was present in txt file
    // printf("The character I read was %c\n",c);  // it will print another character which was present in read2.txt file
    // fclose(ptr);                                //this will close the ptr file

    //******fgets function******                // in fgetc s stands for string
    // char str[34];
    // fgets(str,3,ptr);                           //it copies the first 3 character string from txt file to str note:-one is null character string
    // printf("The string is %s\n",str);

    //******fgetc function****** 
    fputc('o',ptr);               //it  erase all the content of and then copies copies fputc statemen in txt file.In fputc C stand for Character.
    fputs("This is Tushar",ptr);  //it  erase all the content of and then copies fputs statement in txt file.In fputs S stand for string.







    return 0;
}