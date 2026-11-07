#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL checkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter 2 number :");
    scanf("%d %d",&iValue1,&iValue2);

    bRet = checkEqual(iValue1,iValue2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }else
    {
        printf("Not Equal");
    }
    return EXIT_SUCCESS;
}