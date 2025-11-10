#include<stdio.h>
#define PI 3.14

double FhTOCs(float fFh)
{
   double dCelsius = 0.0;
   dCelsius = (fFh-32) * (5.0/9.0);

   return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Please enter Temperature in Fahrenheit :");
    scanf("%f", &fValue);

    

   
    dRet = FhTOCs(fValue);

    printf("Temperature in Celsius  is %.2lf", dRet);

    return 0 ;
}