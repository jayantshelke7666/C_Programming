#include<stdio.h>
#include<stdlib.h>


float Percentage(int iTotal , int iMarks)
{
    float fPercentage = 0.0f;

    if(iTotal <= 0 || iMarks > iTotal || iMarks < 0)
    {
        printf("Invalid Input");
        return -1;
    }

    fPercentage = ((float)iMarks/(float)iTotal)*100;

    return fPercentage;
}

int main()
{
    int iTotalMarks = 0, iObtainedMarks = 0;
    float fRet = 0;
    printf("Enter total and obtained marks :");
    scanf("%d %d",&iTotalMarks,&iObtainedMarks);

    fRet = Percentage(iTotalMarks,iObtainedMarks);

    printf("%.2f",fRet);

    return EXIT_SUCCESS;
}