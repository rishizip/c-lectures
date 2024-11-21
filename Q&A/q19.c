// wap to print the table of a number in reverse input by user
#include<stdio.h>
int main()
{
    int a,mul,add,dif,choice;
    printf("Enter a number : ");
    scanf("%d",&a);

    printf("1. Sum Table\n");
    printf("2. Difference Table\n");
    printf("3. Multiply Table\n");

    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        for(int i=10; i>=1; i--){
            printf("%d + %d = %d\n",a,i,a+i);
        }
        break;

    case 2:
        for(int i=10; i>=1; i--){
            printf("%d - %d = %d\n",a,i,a-i);
        }
        break;

    case 3:
        for(int i=10; i>=1; i--){
            printf("%d x %d = %d\n",a,i,a*i);
        }
        break;

    default:
        printf("Invalid Choice\n");
        break;
    }
    return 0;
}