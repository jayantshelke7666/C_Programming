#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0, iNonFactSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iNonFactSum += iCnt;
        }
        else
        {
            iFactSum += iCnt;
        }
    }
    return iFactSum-iNonFactSum;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);
    
    return EXIT_SUCCESS;
}