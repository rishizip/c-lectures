// waf using library to calculated square of a number
#include<stdio.h>
#include<math.h>
void square(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    square(n);
    return 0;
}
void square(int n){
float power = pow(n,2);
printf("square of %d = %f",n,power);
}