#include<stdio.h>

// Function prototypes
void printoper(int a, int choice);

int main() {
    int a, choice;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("1. Sum Table\n");
    printf("2. Difference Table\n");
    printf("3. Multiply Table\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printoper(a, choice);
    return 0;
}

void printoper(int a, int choice) {
    switch (choice) {
        case 1:
            for (int i = 1; i <= 10; i++) {
                printf("%d + %d = %d\n", a, i, a + i);
            }
            break;

        case 2:
            for (int i = 1; i <= 10; i++) {
                printf("%d - %d = %d\n", a, i, a - i);
            }
            break;

        case 3:
            for (int i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", a, i, a * i);
            }
            break;

        default:
            printf("Invalid Choice\n");
    }
}
