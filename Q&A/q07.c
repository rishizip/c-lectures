// wap to print 1 or 0 for following statements
// a. if its sunday and its snowing
// b. if its monday or its morning
// c. if a number is greater than 9 or less than 100

#include<stdio.h>
int main()
{
 // a.
    int sunday, snowing;

    printf("1 for yes and 0 for no\n");
    printf("Is today Sunday? : ");
    scanf("%d",&sunday);
    printf("Is today snowing? : ");
    scanf("%d",&snowing);
    printf("Sunday and snowing = %d\n",(sunday == 1) && (snowing == 1));

   // b
    int monday, morning;
    printf("Is today Monday? : ");
    scanf("%d",&monday);
    printf("Is morning? : ");
    scanf("%d",&morning);
    printf("Monday or morning = %d\n",(monday == 1) || (morning == 1));

    // c
    int num;
    printf("Enter a number : ");
    scanf("%d",num);
    printf("Result = %d\n",(num > 9) || (num < 100));

    return 0;
}