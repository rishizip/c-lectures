// warf to factorial of n no.
#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Factorial = %d",fact(n));
    return 0;
}

int fact(int n){
    if (n == 0){
        return 1;
    }
    int factn1 = fact(n - 1);
    int factN = factn1 * n;
    return factN;
}