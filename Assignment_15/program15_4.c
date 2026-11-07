#include<stdio.h>
#include<stdlib.h>


int Multiply(int iNo1, int iNo2, int iNo3)
{
    return iNo1*iNo2*iNo3;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;
    printf("Enter 3 number :");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}