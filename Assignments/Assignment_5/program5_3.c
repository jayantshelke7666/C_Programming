#include<stdio.h>
#include<stdlib.h>

void DisplyGrade(float fMarks)
{
    if( fMarks >=90 && fMarks <=100 )
    {
        printf("Grade A");
    }
    else if( fMarks >=75 && fMarks <=89 )
    {
        printf("Grade B");
    }
    else if( fMarks >=60 && fMarks <=74 )
    {
        printf("Grade c");
    }
    else if( fMarks >=40 && fMarks <=59 )
    {
        printf("Grade D");
    }
    else 
    {
        printf("Fail");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter two numbers :");
    scanf("%d", &iValue);

    DisplyGrade(iValue);

    return EXIT_SUCCESS;
}