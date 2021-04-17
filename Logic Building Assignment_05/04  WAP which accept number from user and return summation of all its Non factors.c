#include<stdio.h>
#include<conio.h>

int Sum_Non_Fact(int iNo)
{
    int i=0,Sum=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(i=1;i<=iNo;i++)
    {
        if(iNo%i!=0)
        {
            Sum=Sum+i;
        }
    }

    return Sum;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    iRet=Sum_Non_Fact(iValue);

    printf("Summation of all its Non Factors is %d\n ",iRet);

    getch();
    return 0;
}
