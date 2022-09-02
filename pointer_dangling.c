// deallocation of memory 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *str="Tushar";
    int a;
    int *ptr=(int *)malloc(sizeof(int));
    free(ptr);  //ptr now becomes a dangling pointer 
    return 0;
}


// Returning local variable in function calls
/*
#include <stdio.h>
#include <string.h>
int *myfunc
{
    // a is a local variable and goes out of scope on function return over. 
    int a=34;
    return &a;
}
int main()
{
    int *ptr=myfunc(); //ptr points to inavlid location
    printf("%d",ptr);
    return 0;
}
*/

// variable goes out of scope
/*
#include <stdio.h>
#include <string.h>
int main()
{
    int *ptr;
    {
        int i=34;
        ptr = &i; //ptr points to a invalid location 
    }
    //ptr now a dangling pointer
    printf("%d",*ptr);
    return 0;
}
*/