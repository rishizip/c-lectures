// wap to print factorial of a n numbers
#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter a number : ");
    scanf("%d",&n);

    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
        return 0;
    }

    if (n == 0) {
        printf("Factorial of 0 = 1\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial = %d\n",fact);

    return 0;
}