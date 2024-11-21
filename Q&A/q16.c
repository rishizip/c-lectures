// keep taking numbers as input from user untill user enters an odd number
#include<stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    do {
        scanf("%d",&n);
        if(n%2 != 0){
            printf("Try Even No.\n");
            break;
        } else {
            printf("number = %d",n);
            break;
        }
    } while (1);
    return 0;
}
