// waf to print hot or cold depend on the tempreture enter
#include <stdio.h>
void temperature(float temp);
int main() {
    float temp;
    printf("Enter temperature in Celsius : ");
    scanf("%f", &temp);
    temperature(temp);
    return 0;
}

void temperature(float temp) {
    if (temp >= 15 && temp <= 25) {
        printf("Room temperature\n");
    } else if (temp > 25 && temp <= 100) {
        printf("Hot temperature\n");
    } else if (temp >= 8 && temp < 15) {
        printf("Cold temperature\n");
    } else if (temp >= -100 && temp < 8) {
        printf("Ice cold temperature\n");
    } else {
        printf("Enter a temperature within the range of -100 to 100 Celsius.\n");
    }
}
