// wap to print the value of 'i' from it's pointer to pointer
#include<stdio.h>
int main()
{
    int i;
    printf("Enter the value of i : ");
    scanf("%d",&i);
    int *(ptr) = &i;
    int **(pptr) = &ptr;
    printf("value = %d\n",**(pptr));
    return 0;
}