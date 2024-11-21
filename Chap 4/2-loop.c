// loops - for,while
// for loop
#include<stdio.h>
int main()
{
    for(int i=0; i<=9; i++){
        printf("Hello World !!\n");
    }

    for(char ch='a'; ch<='z'; ch++){
        printf("%c\n",ch);
    }

// while
    int j=1;
    while(j<=50){
        printf("%d\n",j%2==0);
        j++;
    }
    return 0;
}   