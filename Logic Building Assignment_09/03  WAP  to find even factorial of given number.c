#include<stdio.h>
#include<conio.h>

int Even_Factorial(int iNo)
{
  int fact=1;

   if(iNo<0)
   {
       iNo=-iNo;
   }
   for(;iNo>0;iNo--)
   {
     if(iNo%2==0)
     {
         fact=fact*iNo;
     }
   }

   return fact;
}

int main()
{
    int iValue=0,iRet=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    iRet=Even_Factorial(iValue);

    printf("\n Even Factorial of Given Number is %d \n ",iRet);

    getch();
    return 0;
}
