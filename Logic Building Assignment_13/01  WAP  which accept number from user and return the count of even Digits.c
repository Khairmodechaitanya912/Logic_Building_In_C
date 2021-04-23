#include<stdio.h>
#include<conio.h>

int Even_Count(int iNo)
{
   int EDigit=0,Cnt=0;

   if(iNo<0)
   {
       iNo=-iNo;
   }

   for(;iNo>0;iNo=iNo/10)
   {
       EDigit=iNo%10;

       if(EDigit%2==0)
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

    bRet=Even_Count(iValue);

    printf("\n In Given Number Count of Even Digit is = %d \n ",bRet);

    getch();
    return 0;

}
