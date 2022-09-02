#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
int generateRandomNumber(int n)
{
    srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    return rand() %n;
}
int greater(char char1,char char2)
{
    // return 1 if char1>char2 and 0 if char1<char2.if char1==char2 return -1.
    if (char1 == char2)
    {
        return 0;
    }
    else if((char1='r') && (char2='s'))
    {
        return 1;
    }
    else if((char1='s') && (char2='r'))
    {
        return -1;
    }
    else if((char1='p') && (char2='r'))
    {
        return 1;
    }
    else if((char1='r') && (char2='p'))
    {
        return -1;
    }
    else if((char1='s') && (char2='p'))
    {
        return 1;
    }
    else if((char1='p') && (char2='s'))
    {
        return -1;
    }
}
int main()
{
    int playerScore=0,compScore=0,temp;
    char playerChar,compChar;
    char dict[]={'r','p','s'};
    printf("Welcome to My Game\n");
    for(int i=0;i<3;i++)
    {
        // Take player's input 
    printf("Your turn:\n");
    printf("Choose 1 for Rock, 2 for Paper, 3 for Scissor\n");
    scanf("%d",&temp);
    getchar();
    playerChar=dict[temp -1];
    printf("You choose %c \n",playerChar);

        // Generate computer's input 
    printf("Computer's turn:\n");
    printf("Choose 1 for Rock, 2 for Paper, 3 for Scissor\n");
    temp=generateRandomNumber(3) +1;
    compChar=dict[temp -1];
    printf("Computer choose %c \n",compChar);

    if(greater(playerChar,compChar) == 1)
       {
           playerScore += 1;
           printf("You got it.......\n");
       }
    else if(greater(playerChar,compChar) == 0)
       {
           compScore += 1;
           playerScore += 1;
           printf("Draw.......\n");
       }
    else 
       {
           compScore += 1;
           printf("Computer got it.......\n");
       }
    printf("You:%d\n CPU:%d\n",playerScore, compScore);
    }
    if(playerScore > compScore)
    {
        printf("You Win");
    }
    else if(playerScore < compScore)
    {
        printf("Computer Win");
    }
    else if(playerScore == compScore)
    {
        printf("Its a Draw Game");
    }
    return 0;
}