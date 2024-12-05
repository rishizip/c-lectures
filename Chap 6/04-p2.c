// swap
#include <stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main() {
    int a, b;
    printf("Call By Reference\n");
    printf("Enter two integer numbers: ");
    scanf("%d%d", &a, &b);
    
    printf("Before swapping: a = %d and b = %d\n", a, b);
    
    printf("After swapping using call by reference...\n");
    _swap(&a, &b); // Pass addresses of `a` and `b`
    printf("a = %d and b = %d\n", a, b);
    
    printf("After swapping using call by value...\n");
    swap(a, b); // Pass values of `a` and `b`
    
    return 0;
}

// Call by reference
void _swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Call by value
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("a = %d and b = %d\n", a, b);
}
