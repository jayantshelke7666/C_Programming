#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("Invalid");
    }
    else if((iYear % 400 == 0) || ((iYear % 4 ==0) && (iYear % 100 !=0)))
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a Leap year");
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter a number :");
    scanf("%d",&iValue);

    CheckLeapYear(iValue);

    return EXIT_SUCCESS;
}