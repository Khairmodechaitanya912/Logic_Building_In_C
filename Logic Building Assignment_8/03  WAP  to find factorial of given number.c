#include<stdio.h>
#include<conio.h>

int Factorial(int iNo)
{
    int fac=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(;iNo>0;iNo--)
    {
        fac=fac*iNo;
    }
    return fac;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("\n Factorial of Number is = %d \n ",iRet);

    getch();
    return 0;
}
