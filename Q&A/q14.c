// wap to print the natural n no in reverse
#include<stdio.h>
int main()
{
    int n;
    printf("Enter No. : ");
    scanf("%d",&n);

    for(int i=n; i>=1; i--){
        printf("%d",i);
    }
    
    return 0;
}