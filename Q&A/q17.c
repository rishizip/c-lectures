// keep taking numbers as input from user untill user enters a multiple of 7
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    do {
        scanf("%d",&n);
        if(n%7 == 0){
            printf("Try Non Multiple of 7\n");
            break;
        } else {
            printf("number = %d",n);
            break;
        }
    } while (1);
    return 0;
}