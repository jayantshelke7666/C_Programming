#include<stdio.h>

void PrintEven(int iNo)
{
    int i = 0;
    for(i = 2;i<=iNo*2; i+=2)
    {
        printf("%d ",i);
    }
}
int main()
{
    int iValue=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}