#include <stdio.h>
#include <string.h>
union stud_data
{
    int id;
    int marks;
    char fav_char; /* It will give only fav_char output correct and other give garbage value like for Id and marks */
}Tushar,Keshav;
int main()
{
    Tushar.id=1;
    Keshav.id=2;
    Tushar.marks=100;
    Keshav.marks=200;
    Tushar.fav_char='T';
    Keshav.fav_char='K';
    printf("Tushar's Id is %d\n",Tushar.id);
    printf("Keshav's Id is %d\n",Keshav.id);
    printf("Tushar's Id is %d\n",Tushar.marks);
    printf("Keshav's Id is %d\n",Keshav.marks);
    printf("Tushar's Id is %c\n",Tushar.fav_char);
    printf("Keshav's Id is %c\n",Keshav.fav_char);

    return 0;
}