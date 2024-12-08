#include<stdio.h>
int main()
{
    int marks[2][3];
    marks[0][0] = 90;
    marks[0][1] = 79;
    marks[0][2] = 98;

    marks[1][1] = 95;
    marks[1][2] = 78;
    marks[1][3] = 89;

    printf("%d",marks[0][0]);
    return 0;
}