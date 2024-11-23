// waf that print Namaste for Indian and Bonjour for French
#include<stdio.h>
void Indian(){
    printf("Namaste\n");
}

void French(){
    printf("Bonjour\n");
}

int main(){
    char choice;
    printf("Type 'I' for India and 'F' for French : ");
    scanf("%c",&choice);

    switch (choice)
    {
    case 'I':
        Indian();
        break;

    case 'F':
        French();
        break;
    
    default:
        printf("Indvalid Entry\n");
        break;
    }
    return 0;
}