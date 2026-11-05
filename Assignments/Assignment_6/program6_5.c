#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(fSalary < 0 || iYears < 0)
    {
        printf("Invalid input");
    }
    else if(iYears >=0 && iYears <5)
    {
        fBonus = fSalary*(5.0/100.0);
        printf("Bonus = %f",fBonus);
    }
    else if(iYears >=5 && iYears <=10)
    {
        fBonus =fSalary*(10.0/100.0);
        printf("Bonus = %f",fBonus);
    }
    else
    {
        fBonus = fSalary*(15.0/100.0);
        printf("Bonus = %f",fBonus);
    }
  

}
int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and Years of service :");
    scanf("%f %d",&fSalary , &iYears);

    CalculateBonus(fSalary,iYears);

    return EXIT_SUCCESS;
}