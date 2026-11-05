#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvemFact = 0;
    int iOddFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, iEvemFact = 1, iOddFact = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iOddFact *= iCnt;
        }
        else
        {
            iEvemFact *= iCnt;
        }
    }
    return iEvemFact-iOddFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf(" Factorial difference is %d",iRet);

    return EXIT_SUCCESS;
}