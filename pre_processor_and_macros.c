#include <stdio.h>
#include <string.h>
#define Area_of_Circle(r) (3.14*r*r)
#define PI 3.14
int main()
{
    int r=4;
    printf("Area of circle is %f \n",Area_of_Circle(r));
    printf("The value of PI is %f \n",PI);
    printf("Today's Date is %s\n",__DATE__);
    printf("Today's Time is %s\n",__TIME__);
    printf("The file name is %s\n",__FILE__);
    printf("The Line no. is %d\n",__LINE__);
    printf("ANSI: %d\n",__STDC__);
    return 0;
}