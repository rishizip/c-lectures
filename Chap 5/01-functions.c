#include <stdio.h>

// Function prototypes
void printMenu();
void performOperation(int, int, char);

int main() {
    int num1, num2;
    char choice;

    printf("Enter 1st number : ");
    scanf("%d", &num1);

    printf("Enter 2nd number : ");
    scanf("%d", &num2);

    printMenu(); // func^n call
    printf("Enter choice : ");
    scanf(" %c", &choice);
    performOperation(num1, num2, choice); // func^n call

    return 0;
}

void printMenu() {
    printf("Choose an operation:\n");
    printf("+ for addition\n");
    printf("- for subtraction\n");
    printf("* for multiplication\n");
    printf("/ for division\n");
}

void performOperation(int num1, int num2, char choice) {
    switch (choice) {
        case '+':
            printf("Sum = %d\n", num1 + num2);
            break;
        case '-':
            printf("Difference = %d\n", num1 - num2);
            break;
        case '*':
            printf("Product = %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Quotient = %d\n", num1 / num2);
            } else {
                printf("Cannot divide by zero!\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;

}
}
