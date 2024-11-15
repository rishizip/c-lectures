// type conversion
#include<stdio.h>
int main()
{
    // done by coppiler
    // printf("%f \n",4/2.0);
    // return 0;

    // explicit -> done by us
    int a = (int) 99.99;
    printf("%d \n",a);

    // operator precedence
    // *,/,% -> +,-, -> =
    int x;
    x = 4 + 9 * 10 ;
    printf("ans = %d",x);
}