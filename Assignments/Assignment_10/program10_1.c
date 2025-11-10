#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
   double Area = PI * fRadius * fRadius;

   return Area;
}

int main()
{
    float fValue = 0.0;
    double fRet = 0.0;

    printf("Please radius:");
    scanf("%f", &fValue);

   
    fRet = CircleArea(fValue);

    printf("Area of the Circle is %.2lf", fRet);

    return 0 ;
}