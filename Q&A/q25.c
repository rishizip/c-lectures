// warf to print hello word 5 times
#include<stdio.h>
void printHW(int n);
int main(){
printHW(5);
return 0;
}
void printHW(int n){
    if(n==0){
        return;
    }
    printf("hello world\n");
    printHW(n-1);
}