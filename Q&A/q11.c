// wap to find if a character entered by user is upper case or not
#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    printf("Enter character: ");
    scanf(" %c", &a);

    if (a >= 'A' && a <= 'Z') {
        printf("Upper Case");
    } else if (a >= 'a' && a <= 'z') {
        printf("Lower Case");
    } else {
        printf("Not an alphabet");
    }

   return 0;
}
