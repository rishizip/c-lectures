#include<stdio.h>
#include<math.h>
int main()
{
    // type declaration instruction
    // int a = 22;
    // int b = a;
    // int c = b * 6;
    // int d = 1, e;
    // int old_age = 22, years = 2;
    // int new_age = old_age + years;
    // int x,y,z;
    // x = y = z = 4;
    // return 0;

    // arithmetic instruction


    // Addition
        int d = 5, e = 2;

    // Addition
    int sum = d + e;
    printf("Sum = %d\n", sum);

    // Subtraction
    int difference = d - e;
    printf("Difference = %d\n", difference);

    // Multiplication
    int product = d * e;
    printf("Product = %d\n", product);

    // Division
    int quotient = d / e;
    printf("Quotient = %d\n", quotient);

    // Exponentiation
    double power = pow(d, e);
    printf("Power = %.2f\n", power);

    // remainder
    int modul = d % e;
    printf("Quotient = %d\n",modul);

        // operator precedence
    // *,/,% -> +,-, -> =
    int x;
    x = 4 + 9 * 10 ;
    printf("ans = %d\n",x);

    // for same precidence
    // associativity -> left to right
    int y = 4 * 3 / 6 * 2;
    printf("ans = %d\n",x);

    // control instructions
    // a) sequence, b) decision, c) loop, d) case
return 0;
}