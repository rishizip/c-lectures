#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    // store the value to adress of variable '&' represent adress
    printf("age = %d",age);
    return 0;
}