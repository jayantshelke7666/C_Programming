#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart , int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    if(iStart > iEnd)
    {
        printf("Invalid Input");
        return -1;
    }
    for(iCnt = iStart; iCnt <= iEnd ; iCnt++)
    {
        iSum += iCnt;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("Sum is %d",iRet);

    return EXIT_SUCCESS;
}