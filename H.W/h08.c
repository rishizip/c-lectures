// wap make your own pow function
#include<stdio.h>
int power(int base, int exponent);

int main() {
    int a, b;
    printf("Enter the base: ");
    scanf("%d", &a);
    printf("Enter the exponent: ");
    scanf("%d", &b);

    int result = power(a, b);
    printf("%d raised to the power %d is %d\n", a, b, result);
    return 0;
}

int power(int base, int exponent) {
    int result = 1;
    if (exponent == 0) {
        return 1;
    } else if (exponent > 0) {
        for (int i = 1; i <= exponent; i++) {
            result *= base;
        }
    } else {
        for (int i = 1; i <= -exponent; i++) {
            result *= base;
        }
        return 1.0 / result;
    }
    return result;
}
