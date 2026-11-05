#include<stdio.h>
#include<stdlib.h>

double SquareMeter(double iValue)
{
    double fArea = 0.0f;
    fArea = iValue * 0.0929f;

    return fArea;
}
int main()
{
    double fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter area in square feet  :");
    scanf("%lf",&fValue);


    dRet = SquareMeter(fValue);

    printf("Area in square meter %f :",dRet);
    return EXIT_SUCCESS;

}