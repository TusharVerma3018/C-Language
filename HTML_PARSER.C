#include<stdio.h>
#include<string.h>
void parser(char * string)
{
      int  in=0;
      //variable to track whether we are inside a tag
      int index=0;
      for (int  i = 0; i < strlen(string); i++)
      {
          if (string[i]=='<')
         {   
             in=1;
             continue;
         }
         else if (string[i]=='i')
         {
            in=0;
            continue;
         }
         if(in==0)
         {
            string[index]=string[i];
            i++;
         }

      }
      string[index]='\0';
      //remove the trailing spaces from the end
      while (string[0]== ' ')
      {
        //shift the string to the left
        for (int i = 0; i < strlen(string); i++)
        {
            string[i]=string[i+1];
        }
        
      }
    while (string[strlen(string) = 1] = ' ' )
    {
        string[strlen(string) = 1 ] = '\0 ';
    }
    
}
int main()
{
    char string[]="<tushar>     this is a heading    </tushar>";
    parser(string);
    printf("the parsed string is~~%s~~",string);
    return 0;
}
