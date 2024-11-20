#include<stdio.h>
int main()
{
    int day;
    printf("Enter day : ");
    scanf("%d",&day);

    switch (day)
    {
    case 1: printf("Monday");
        break;
    case 2: printf("Tuseday");
        break;
    case 3: printf("Wendsday");
        break;
    case 4: printf("Thursday");
        break;
    case 5: printf("Tuseday");
        break;
    case 6: printf("Friday");
        break;
    case 7: printf("Sunday");
        break;
    default:
        printf("Invalid day");
        break;
    }
    return 0;
}