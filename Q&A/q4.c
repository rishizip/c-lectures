// precidence
// a) 5*2 - 2*3
#include<stdio.h>
int main()
{
    int a = 5*2 - 2*3;
    printf("Ans = %d\n",a);
    
// b) 5*2 / 2*3
    int b = 5*2 / 2*3;
    printf("Ans = %d\n",b);

// c) 5*(2/2)*3
    int c = 5*(2/2)*3;
    printf("Ans = %d\n",c);

// d) 5+2/2*3
    int d = 5+2/2*3;
    printf("Ans = %d",d);

return 0;
}