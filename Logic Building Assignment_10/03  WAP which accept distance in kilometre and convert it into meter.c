/*
   (1 kilometre = 1000 Meter)

   Input : 5
   Output : 5000

*/

#include<stdio.h>
#include<conio.h>

int Km_To_Meter(int iNo)
{
   int Dist=0;

   Dist=iNo*1000;

   return Dist;
}
int main()
{
    int iValue=0,iRet=0;

    printf("\n Enter Distance = ");
    scanf("%d",&iValue);

    iRet=Km_To_Meter(iValue);

    printf("\n Distance in Kilometer is Converted into Meter = %d \n",iRet);

    getch();
    return 0;
}

