// wap to give grades to a student

#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks");
    } else if (marks < 30) {
        printf("Grade C");
    } else if (marks < 70) {
        printf("Grade B");
    } else if (marks < 90) {
        printf("Grade A");
    } else {
        printf("Grade A+");
    }

    return 0;
}
