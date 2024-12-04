// wap to check if a student pass or fail
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter student marks(0-100) : ");
    scanf("%d",&marks);

    // marks>30 ? printf("pass") : printf("fail");
    if (marks>=0 && marks < 30)
        printf("fail");
    
    else if (marks>30 && marks <= 100 )
        printf("pass");

    else
        printf("invalid marks");
    
    return 0;
}