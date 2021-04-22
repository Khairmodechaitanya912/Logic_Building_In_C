#include<stdio.h>
#include<conio.h>

int Count(int iNo)
{
    int LDigit=0,Cnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(;iNo>0;iNo=iNo/10)
    {
        LDigit=iNo%10;

        if(LDigit<6)
        {
            Cnt++;
        }
    }
    return Cnt;
}

int main()
{
    int iValue=0;
    int bRet=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    bRet=Count(iValue);

    printf("\n Count of Digit Which Are less than 6 is = %d \n ",bRet);

    getch();
    return 0;
}
