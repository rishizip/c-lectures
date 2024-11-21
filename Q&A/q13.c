// wap to print the first n natural no and reverse it
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter No. : ");
    scanf("%d",&n);
    for(int i=1,j=n; i<=n && j>=1; i++,j--){
        sum+=i;
        printf("%d\n",j);
    }
        printf("sum = %d\n",sum);
    return 0;
}