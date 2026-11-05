#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits >=0 && iUnits <=100)
    {
        fBill = iUnits * 5;
        printf("Bill = %f",fBill);
    }
    else if(iUnits >100 && iUnits <=200)
    {
        fBill = ((iUnits-100) * 7) + (100 * 5);
        printf("Bill = %f",fBill);
    }
    else if(iUnits >200 )
    {
        fBill = ((iUnits -200) * 10) + (100 * 7) + (100 * 5);
        printf("Bill = %f",fBill);
    }else
    {
        printf("Invalid Units");
    }
}
int main()
{
    int iUnits = 0;
    
    printf("Enter consumed units :");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}