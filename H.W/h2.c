// wap to check if given character is a digit or not
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character : ");
    scanf("%c",&a);

    printf("result = %c\n",(a>=0) || (a>=9));
    return 0;
}