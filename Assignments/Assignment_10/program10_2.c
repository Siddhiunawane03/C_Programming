#include<stdio.h>
#define PI 3.14

double RectArea(float fWidth, float fHeight)
{
   double Area = 0.0;
   Area = fWidth * fHeight;

   return Area;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double fRet = 0.0;

    printf("Please enter Width :");
    scanf("%f", &fValue1);

    printf("Please enter Height :");
    scanf("%f", &fValue2);


   
    fRet = RectArea(fValue1, fValue2);

    printf("Area of the Rectangle is %.2lf", fRet);

    return 0 ;
}