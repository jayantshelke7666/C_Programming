#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iNo1,int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("%d is Greater",iNo1);
    }
    else if(iNo1 < iNo2)
    {
        printf("%d is Greater",iNo2);
    }
    else
    {
        printf("Both numbers are equal");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    
    printf("Enter two number :");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}