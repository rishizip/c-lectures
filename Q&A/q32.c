// will be the address output same ?
// yes
void printaddress2(int *n);
#include<stdio.h>
int main()
{
    int n = 4;
    printf("address of n = %u\n",&n);
    printaddress2(&n);
    return 0;
}

void printaddress2(int *n){
    printf("address of n = %u\n",n);
}