//wap to print the numbers from 0 to n
#include<stdio.h>
int main()
{
    int n;
    printf("Enter No. : ");
    scanf("%d",&n);
    
    for(int i=0; i<=n; i++){
        printf("%d\n",i);
    }
    return 0;
}