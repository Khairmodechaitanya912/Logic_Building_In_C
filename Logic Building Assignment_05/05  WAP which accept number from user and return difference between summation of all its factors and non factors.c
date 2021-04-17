#include<stdio.h>
#include<conio.h>

int Fact_Diff(int iNo)
{
    int i=0,NfSum=0,FSum=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(i=1;i<iNo;i++)
    {
        if(iNo%i!=0)
        {
            NfSum=NfSum+i;
        }
        else
        {
            FSum=FSum+i;
        }
    }

    return (FSum-NfSum);
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    iRet=Fact_Diff(iValue);

    printf("\n Difference Between Sum of all its Factors and Non factors is %d \n",iRet);

    getch();
    return 0;
}
