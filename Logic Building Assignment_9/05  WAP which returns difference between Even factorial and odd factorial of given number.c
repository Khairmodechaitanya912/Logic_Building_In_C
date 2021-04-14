#include<stdio.h>
#include<conio.h>

int Factorial_Diff(int iNo)
{
    int EFact=1,OFact=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(;iNo>0;iNo--)
    {
        if(iNo%2==0)
        {
            EFact=EFact*iNo;
        }
        else
        {
            OFact=OFact*iNo;
        }
    }

    return EFact-OFact;
}
int main()
{
    int iValue=0,iRet=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    iRet=Factorial_Diff(iValue);

    printf("\n Factorial Difference is %d \n",iRet);

    getch();
    return 0;
}
