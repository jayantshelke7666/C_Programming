#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float ftemp)
{
    float fCelcius = 0.0f;

    fCelcius = ((32 - ftemp)*(5.0/9.0));

    return fCelcius;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit :");
    scanf("%f",&fValue);


    dRet = FhtoCs(fValue);

    printf("%.3f Fahrenheit = %.3f celcius",fValue,dRet);
    return EXIT_SUCCESS;

}