#include <stdio.h>
#include <string.h>
struct travel
{
    char name;
    int dlno;
    char route;
    int kms;
};
int main()
{
    // struct travel d1,d2,d3;

    // printf("Enter the details of First drivers\n");
    // printf("Enter the Name of First driver:");
    // scanf("%s",&d1.name);
    // printf("\nEnter the dlno of First driver:");
    // scanf("%d",&d1.dlno);
    // printf("\n Enter the route of First driver:");
    // scanf("%s",&d1.route);
    // printf("\n Enter the distance(in kms) of First driver:");
    // scanf("%d",&d1.kms);

    // printf("\nEnter the details of Second drivers\n");
    // printf("Enter the Name of Second driver:");
    // scanf("%s",&d2.name);
    // printf("\nEnter the dlno of Second driver:");
    // scanf("%d",&d2.dlno);
    // printf("\n Enter the route of Second driver:");
    // scanf("%s",&d2.route);
    // printf("\n Enter the distance(in kms) of Second driver:");
    // scanf("%d",&d2.kms);

    // printf("Enter the details of Third drivers\n");
    // printf("Enter the Name of Third driver:");
    // scanf("%s",&d2.name);
    // printf("\nEnter the dlno of Third driver:");
    // scanf("%d",&d2.dlno);
    // printf("\n Enter the route of Third driver:");
    // scanf("%s",&d2.route);
    // printf("\n Enter the distance(in kms) of Third driver:");
    // scanf("%d",&d2.kms);

    // printf("All the Information about the drivers are given");

    int i=1;
    printf("The details of drivers are given below\n");
    struct travel s[3];
    for(i=1;i<4;i++)
    {
       printf("Enter the details of %d drivers\n",i);
       printf("Enter the Name of %d driver:",i);
       scanf("%s",&s[i].name);
       printf("Enter the dlno of %d driver:",i);
       scanf("%d",&s[i].dlno);
       printf("Enter the route of %d driver:",i);
       scanf("%s",&s[i].route);
       printf("Enter the distance(in kms) of %d driver:",i);
       scanf("%d",&s[i].kms);
    }
    return 0;
}