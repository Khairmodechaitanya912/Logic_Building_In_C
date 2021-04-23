#include<stdio.h>
#include<conio.h>

int Count_Diff(int iNo)
{
    int Esum=0,Osum=0,EODiff=0,Rem=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(;iNo>0;iNo=iNo/10)
    {
        Rem=iNo%10;

        if(Rem%2==0)
        {
           Esum=Esum+Rem;
        }
        else
        {
            Osum=Osum+Rem;
        }
    }

    EODiff=Esum-Osum;

    return EODiff;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    iRet=Count_Diff(iValue);

    printf("\n Difference Between Summation of Even Digits and Summation Odd Digits is = %d \n ",iRet);

    getch();
    return 0;

}
