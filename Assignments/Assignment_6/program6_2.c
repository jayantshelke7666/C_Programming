#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks,int iAge)
{

    if((fMarks >=60 && fMarks <=100) && (iAge >= 17))
    {
        printf("Eligible for admission");
    }
    else if( (fMarks < 60 && fMarks >= 0) || (iAge >= 0 && iAge <17))
    {
        printf("Not eligible");
    }
    else
    {
        printf("Invalid input");
    }
}
int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age :");
    scanf("%f %d",&fMarks , &iAge);

    CheckAdmission(fMarks , iAge);

    return EXIT_SUCCESS;
}