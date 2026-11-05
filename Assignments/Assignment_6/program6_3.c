#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount >= 0 && fAmount <1000)
    {
        fFinalAmount = fAmount;
        printf("Payable Amount = %f",fFinalAmount);
    }
    else if(fAmount >=1000 && fAmount < 5000)
    {
        fFinalAmount = (fAmount - (fAmount * (0.1f)));
        printf("Payable Amount = %f",fFinalAmount);
    }
    else if (fAmount >= 5000)
    {
        fFinalAmount = fAmount - (fAmount * (0.2f) );
        printf("Payable Amount = %f",fFinalAmount);
    }
    else
    {
        printf("Invalid Amount");
    }
    

}
int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount :");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}