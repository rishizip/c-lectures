// change actual value with the help of pointer
#include<stdio.h>
void square(int n);
void _square(int* n);
int main()
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    square(n);
    printf("number = %d\n",n);

    _square(&n);
    printf("number = %d\n",n);
    return 0;
}

void square(int n){
    n = n * n;
    printf("square = %d\n",n);
}

void _square(int* n){
    *n = (*n) * (*n);
    printf("square = %d\n",*n);
}