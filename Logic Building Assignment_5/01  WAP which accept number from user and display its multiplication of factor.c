#include<stdio.h>
#include<conio.h>

int Mult_Fact(int iNo)
{
    int Mult=1,i=1;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(i=iNo/2;i>=1;i--)
    {

      if(iNo%i==0)
      {
          Mult=Mult*i;
      }

    }

    return Mult;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    iRet=Mult_Fact(iValue);

    printf("\n Multiplaction Factor of %d is %d ...!!\n ",iValue,iRet);

    getch();
    return 0;
}
