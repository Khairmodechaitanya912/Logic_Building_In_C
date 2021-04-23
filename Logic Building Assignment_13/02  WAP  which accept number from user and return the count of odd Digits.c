#include<stdio.h>
#include<conio.h>

int Odd_Count(int iNo)
{
    int ODigit=0,Cnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(;iNo>0;iNo=iNo/10)
    {
        ODigit=iNo%10;

        if(ODigit%2!=0)
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

    bRet=Odd_Count(iValue);

    printf("\n In Given Number Count of Odd Digit is = %d \n ",bRet);

    getch();
    return 0;

}
