#include<stdio.h>
#include<conio.h>

int Count_Range(int iNo)
{
   int Range=0,Cnt=0;

   if(iNo<0)
   {
       iNo=-iNo;
   }

   for(;iNo>0;iNo=iNo/10)
   {
       Range=iNo%10;

       if(Range<7 && Range>3)
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

    bRet=Count_Range(iValue);

    printf("\n In Given Number Count of Digits in Between 3 And 7 is = %d \n ",bRet);

    getch();
    return 0;

}
