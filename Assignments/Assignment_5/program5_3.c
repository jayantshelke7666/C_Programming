#include<stdio.h>
#include<stdlib.h>

void Displ(int iFirst,int iSecond)
{
    if(iFirst > iSecond )
    {
        printf("%d is Greater",iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is Gteater",iSecond);
    }
    else
    {
        printf("Both numbers are same");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers :");
    scanf("%d %d", &iValue1 , &iValue2);

    FindGreater(iValue1 , iValue2);

    return EXIT_SUCCESS;
}