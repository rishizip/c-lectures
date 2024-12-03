// warf to convert celcius to farenheit
// f = (c * 0.18) + 32
#include<stdio.h>
float faren(float c);
int main()
{
    float c;
    printf("Enter tempreture : ");
    scanf("%f",&c);
    faren(c);
    return 0;
}

float faren(float c){
    float f = (c * (9/5)) + 32;
    printf("tempreture in farenhite = %f",f);
}
