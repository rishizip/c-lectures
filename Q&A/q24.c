#include <stdio.h>

float areasquare();
float areacir();
float arearec();

int main() {
    int choice;
    printf("Choose an option to calculate area:\n");
    printf("1. Square\n2. Circle\n3. Rectangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Area of square = %f\n", areasquare());
            break;
        case 2:
            printf("Area of circle = %f\n", areacir());
            break;
        case 3:
            printf("Area of rectangle = %f\n", arearec());
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}

float areasquare() {
    float side;
    printf("Enter side value: ");
    scanf("%f", &side);
    return side * side;
}

float areacir() {
    float radius;
    printf("Enter radius value: ");
    scanf("%f", &radius);
    return 3.14 * radius * radius;
}

float arearec() {
    float a, b;
    printf("Enter values of side a and b: ");
    scanf("%f %f", &a, &b);
    return a * b;
}
