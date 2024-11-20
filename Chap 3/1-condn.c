// if-else-else if
#include<stdio.h>
int main()
{
    // int a,b;
    // printf("Enter two number : ");
    // scanf("%d%d",&a,&b);
    // if(a>=b){
    //     printf("a >= b");
    
    // }
    // else
    //     printf("a < b");

    int age;
    printf("Enter your age : ");
    scanf("%d",&age);

    if (age>=18){
        printf("adult\ncan drive\ncan vote\n");
    }
    else{
        printf("not adult");
    }
    printf("Thank you");
    return 0;
}