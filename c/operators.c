// sum of two number
// #include<stdio.h>
// int main()
// {
//     int a,b,sum;
//     printf("Enter first number : ");
//     scanf("%d",&a);
//     printf("Enter second number : ");
//     scanf("%d",&b);
//     sum = a + b;
//     printf("sum = %d",sum);
//     return 0; 
// }

// #include<stdio.h>
// int main()
// {
//     int a,b,diff;
//     printf("Enter first number : ");
//     scanf("%d",&a);
//     printf("Enter second number : ");
//     scanf("%d",&b);
//     diff = a - b;
//     printf("sum = %d",diff);
//     return 0; 
// }
#include <math.h>
#include <stdio.h>

int main() {
    double a, b;
    int choice;

    printf("CALCULATOR\n");
    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("\n1. Sum\n");
    printf("2. Difference\n");
    printf("3. Product\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nSum = %.2lf\n", a + b);
            break;
        case 2:
            printf("\nDifference = %.2lf\n", a - b);
            break;
        case 3:
            printf("\nProduct = %.2lf\n", a * b);
            break;
        case 4:
            if (b == 0)
                printf("\nCan't divide by 0\n");
            else
                printf("\nQuotient = %.2lf\n", a / b);
            break;
        case 5:
            printf("\nPower = %.2lf\n", pow(a, b));
            break;
        case 6:
            printf("\nEnd\n");
            break;
        default:
            printf("\nInvalid choice\n");
    }

   return 0;
}
