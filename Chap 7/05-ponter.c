// compare and difference
#include<stdio.h>
int main()
{
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("Differenc of %u and %u = %u\n",ptr, _ptr , ptr - _ptr);
    printf("Comparison = %u",ptr == _ptr);

return 0;
}