// wap to print sum, product and average of 2 no.
#include<stdio.h>
void DoWork(int a, int b, int *sum, int *prod, int *avg);
int main()
{
    int a,b;
    int sum,prod,avg;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    DoWork(a, b, &sum, &prod, &avg);
    printf("sum = %d and product = %d and average = %d\n",sum,prod,avg);
    return 0;
}
void DoWork(int a, int b, int *sum, int *prod, int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}