#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibiity(int iValue)
{
    if((iValue % 3 == 0) && (iValue % 5 == 0))
    {
        printf("Divisible by Both");
    }
    else if( iValue % 3 == 0)
    {
        printf("Divisible by 3 only");
    }
    else if( iValue % 5 == 0)
    {
        printf("Divisible by 5 only");
    }
    else
    {
        printf("Not Divisible by Either");
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter a number :");
    scanf("%d",&iValue);

    CheckMultipleDivisibiity(iValue);

    return EXIT_SUCCESS;
}