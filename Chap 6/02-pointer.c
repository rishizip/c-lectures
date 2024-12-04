#include<stdio.h>
int main()
{
    float price = 100;
    float *ptr = &price;
    float **pptr = &ptr;

    printf("price = %d\n",ptr);
    printf("price = %d\n",*ptr);
    printf("price = %d\n",**pptr);
    return 0;
}