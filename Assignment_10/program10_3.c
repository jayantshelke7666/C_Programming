#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo*1000;

    return iMeter;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter KM :");
    scanf("%d",&iValue);


    iRet = KMtoMeter(iValue);

    printf("%d KM = %d meter",iValue,iRet);
    return EXIT_SUCCESS;
}