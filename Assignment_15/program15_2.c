#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL checkGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number :");
    scanf("%d",&iValue);

    bRet = checkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater");
    }else
    {
        printf("Smaller");
    }
    return EXIT_SUCCESS;
}