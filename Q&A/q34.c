#include<stdio.h>

int main() {
    float price[3];
    const float GST_RATE = 0.18;

    printf("Enter the price of item 1 : ");
    scanf("%f", &price[0]);

    printf("Enter the price of item 2 : ");
    scanf("%f", &price[1]);

    printf("Enter the price of item 3 : ");
    scanf("%f", &price[2]);

    printf("Total Price of item 1 with GST: %.2f\n", price[0] * (1 + GST_RATE));
    printf("Total Price of item 2 with GST: %.2f\n", price[1] * (1 + GST_RATE));
    printf("Total Price of item 3 with GST: %.2f\n", price[2] * (1 + GST_RATE));

    return 0;
}
