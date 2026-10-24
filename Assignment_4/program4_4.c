#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid Age");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for voting");
    }
    else
    {
        printf("Not Eligible for Voting");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number :");
    scanf("%d",&iValue);

    CheckVotingEligibility(iValue);

    return EXIT_SUCCESS;
}