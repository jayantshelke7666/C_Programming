#include<stdio.h>
#include<stdlib.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iAns = 1;

        if(iNo == 0)
        {
            return 0;
        }
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit != 0)
            {
                iAns *= iDigit;
            }
            iNo = iNo / 10;
        }
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}