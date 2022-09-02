#include <stdio.h>
#include <string.h>
struct student_data
{
    int id;
    int marks;
    char name[37];
    char fav_char;
}Tushar,Keshav;
int main()
{
    // struct student_data Tushar,Keshav;         /*this and before int main() line have same meaning so u have to write one line*/
    Tushar.id=1;
    Keshav.id=2;
    Tushar.marks=100;
    Keshav.marks=99;
    Tushar.fav_char='T';
    Keshav.fav_char='K';

    printf("ID of Tushar is %d\n",Tushar.id);
    printf("ID of Keshav is %d\n",Keshav.id);
    printf("Marks of Tushar is %d\n",Tushar.marks);
    printf("Marks of Keshav is %d\n",Keshav.marks);
    printf("Favorite Character of Tushar is %c\n",Tushar.fav_char);
    printf("Favorite Character of Keshav is %c\n",Keshav.fav_char);
    
    strcpy(Tushar.name,"TUSHARVERMA");
    printf("Tushar's name : %s\n",Tushar.name);
    strcpy(Keshav.name,"KESHAVVERMA");
    printf("Keshav's name : %s\n",Keshav.name);



    return 0;
}