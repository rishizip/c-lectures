// waf to print the sum of digits of number
#include<stdio.h>
int sumofdigit(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int result = sumofdigit(n);
    printf("Sum of digits of %d is: %d\n", n, result);
    return 0;
}

int sumofdigit(int n){
    int sum = 0;
    while (n != 0){
         sum += n % 10;
        n = n / 10;
    }
    return sum;
}