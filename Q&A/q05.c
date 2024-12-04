// wap to check if no divisible by 2
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("0 -> not divisible and 1 -> divisble\n");
    printf("%d",a % 2 == 0);
    return 0;
}