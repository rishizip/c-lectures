#include<stdio.h>

int sum(int a, int b); // func^n defination
void multable(int n);
int main()
{
    int a,b,n;
    printf("Enter 1st No. : ");
    scanf("%d",&a);
    printf("Enter 2nd No. : ");
    scanf("%d",&b);
    int s = sum(a,b); // func^n call
    printf("sum = %d\n",s);
    printf("Enter a No. : ");
    scanf("%d",&n);
    multable(n);
    return 0;
}
int sum(int a, int b){ // func^n declaration
return a + b;
}
void multable(int n){
    for (int i=1; i<=10; i++){
       printf("%d x %d = %d\n", n,i,n*i);
    }
}