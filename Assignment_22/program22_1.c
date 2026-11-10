#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1, ch = 'A'; i <= iNo; i++,ch++)
    {
        printf("%c\t",ch);
    }
}   
int main()
{
    int iValue1 = 0;

    printf("Enter no :");
    scanf("%d",&iValue1);

    Pattern(iValue1);

    return EXIT_SUCCESS;
}