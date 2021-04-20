#include<stdio.h>
#include<conio.h>

void Display_Digit(int iNo)
{
   int iDigit=0;

   if(iNo<0)
   {
       iNo=-iNo;
   }

   while(iNo>0)
   {
       iDigit=iNo%10;
       printf("\n %d ",iDigit);
       iNo=iNo/10;
   }
   printf("\n");
}

int main()
{
   int iValue=0;

   printf("\n Enter Number = ");
   scanf("%d",&iValue);

   Display_Digit(iValue);

   getch();
   return 0;
}
