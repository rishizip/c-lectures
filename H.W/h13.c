// b. Write a program to check if given character is digit
// or not.
#include <stdio.h>

int main() {
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);


    if (a >= '0' && a <= '9') {
        printf("The character '%c' is a digit.\n", a);
    } else {
        printf("The character '%c' is not a digit.\n", a);
    }

    return 0;
}
