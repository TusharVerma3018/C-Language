#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char name[54];
    char fav_char;
};

int main()
{
    struct student tushar,keshav,harshit;
    tushar.id=1;
    keshav.id=2;
    harshit.id=3;

    tushar.marks=10;
    keshav.marks=20;
    harshit.marks=30;

    tushar.fav_char='t';
    keshav.fav_char='k';
    harshit.fav_char='h';


    printf("the id no. of tushar is %d\n",tushar.id);
    printf("the id no. of keshav is %d\n",keshav.id);
    printf("the id no. of harshit is %d\n",harshit.id);

    printf("the marks no. of tushar is %d\n",tushar.marks);
    printf("the marks of keshav is %d\n",keshav.marks);
    printf("the marks of harshit is %d\n",harshit.marks);

    printf("the fav_char of tushar is %c\n",tushar.fav_char);
    printf("the fav_char of keshav is %c\n",keshav.fav_char);
    printf("the fav_char of harshit is %c\n",harshit.fav_char);

    strcpy(tushar.name,"Tushar Verma\n");
    printf("The tushar's name is :%s\n",tushar.name);
    return 0;
}
