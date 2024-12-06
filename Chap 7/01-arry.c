#include<stdio.h>
int main(){
    int marks[2];
    printf("Enter Phy marks : ");
    scanf("%d",&marks[0]);
    printf("Enter Chem marks : ");
    scanf("%d",&marks[1]);
    printf("Enter Math marks: ");
    scanf("%d",&marks[2]);

    printf("Phy marks = %d, Chem marks = %d and Maths marks = %d",marks[0],marks[1],marks[2]);
    return 0;
}