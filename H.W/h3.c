// wap to print the smallest no
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three no. : ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Smallest number = %d", (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c));
    return 0;
}