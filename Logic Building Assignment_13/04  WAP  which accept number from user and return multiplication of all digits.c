#include<stdio.h>
#include<conio.h>

int Mult_Digits(int iNo)
{
   int Mult=1,Rem=0;

   if(iNo<0)
   {
       iNo=-iNo;
   }

   for(;iNo>0;iNo=iNo/10)
   {
       Rem=iNo%10;
       Mult=Mult*Rem;

   }
   return Mult;
}

int main()
{
    int iValue=0;
    int bRet=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    bRet=Mult_Digits(iValue);

    printf("\n In Given Number Multiplication of all Digits is = %d \n",bRet);

    getch();
    return 0;

}
