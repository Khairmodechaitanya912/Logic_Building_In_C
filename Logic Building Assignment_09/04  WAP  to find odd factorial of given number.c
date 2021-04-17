#include<stdio.h>
#include<conio.h>

int Odd_Factorial(int iNo)
{
    int Ofact=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(;iNo>0;iNo--)
    {
        if(iNo%2!=0)
        {
            Ofact=Ofact*iNo;
        }
    }

    return Ofact;
}

int main()
{
    int iValue=0,iRet=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    iRet=Odd_Factorial(iValue);

    printf("\n Odd Factorial of Given Number is %d \n ",iRet);

    getch();
    return 0;
}
