#include<stdio.h>
#include<conio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
    int Mult=0;

    if(iNo1==0)
    {
       Mult=iNo2*iNo3;
    }
    else if(iNo2==0)
    {
        Mult=iNo1*iNo3;
    }
    else if(iNo3==0)
    {
        Mult=iNo1*iNo2;
    }
    else if(iNo1==0 && iNo2==0)
    {
        Mult=iNo3*1;
    }
    else if(iNo2==0 && iNo3==0)
    {
        Mult=iNo1*1;
    }
    else if(iNo1==0 && iNo3==0)
    {
        Mult=iNo2*1;
    }
    else if(iNo1==0 && iNo2==0 && iNo3==0)
    {
        Mult=0;
    }
    else
    {
        Mult=iNo1*iNo2*iNo3;
    }

    return Mult;
}
int main()
{
    int iValue1=0,iValue2=0,iValue3=0,iRet=0;

    printf("\n Enter Three Numbers = \n");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet=Multiply(iValue1,iValue2,iValue3);

    printf("\n Multiplication of Three Number = %d \n",iRet);

    getch();
    return 0;
}
