// wap to calculate percentage of student marks from maths, science and sanskrit
#include<stdio.h>
float calcpercen(float maths, float science, float sanskrit);
int main()
{
    float maths, science, sanskrit;
    printf("Enter marks of subjects -> Marths Science Sanksrit : ");
    scanf("%f%f%f",&maths,&science,&sanskrit);
    printf("Percentage = %.2f%%", calcpercen(maths, science, sanskrit));
    return 0;
}

float calcpercen(float maths, float science, float sanskrit){
return ((maths + science + sanskrit) / 300) * 100;
}