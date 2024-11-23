// waf one to print hello another to print goodbye
#include<stdio.h>
int hello(){
    printf("Hello (=w=)\n");
    return 0;
}

int goodbye(){
    printf("Good Bye ;) \n");
    return 0;
}

int main(){
    hello();
    goodbye();
}