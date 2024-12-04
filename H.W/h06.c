//waf to find square root of number
#include<stdio.h>
#include<math.h>
double squareroot(int n);
int main()
{
    int n;
    printf("Enter a No. : ");
    scanf("%d",&n);
    double result = squareroot(n);
        if (result == -1) {
            printf("Square root of negative numbers is undefined in real numbers.\n");
        } else {
            printf("Square root of %d is : %.2lf", n, result);
        }
        return 0;
}

double squareroot(int n){
    if (n < 0){
        return -1;
    }
    return sqrt(n);
}