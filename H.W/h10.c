// a. Write a program to calculate perimeter of rectangle.
// take sides, a & b, from the user.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the sides of the rectangle : ");
    scanf("%d%d",&a,&b);
    printf("perminter = %d",2*(a+b));
    return 0;
}