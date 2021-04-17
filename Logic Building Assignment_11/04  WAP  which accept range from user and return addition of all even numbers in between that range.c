#include<stdio.h>
#include<conio.h>

int Range_Sum_Even(int iStart,int iEnd)
{
   int i=0,EAdd=0;

   for(i=iStart;i<=iEnd;i++)
   {
       if(i%2==0)
       {
           EAdd=EAdd+i;
       }
   }

   return EAdd;
}
int main()
{
    int iValue1=0,iValue2=0,iRet=0;

    up:

    printf("\n Enter Starting Point = ");
    scanf("%d",&iValue1);

    printf("\n Enter Ending Point = ");
    scanf("%d",&iValue2);

    if(iValue2<iValue1)
    {
        printf("\n Invalid Range...!! \n ");
        goto up;
    }
    else if(iValue1<0||iValue2<0)
    {
       printf("\n Invalid Range...!! \n ");
       goto up;
    }

    iRet=Range_Sum_Even(iValue1,iValue2);

    printf("\n Addition Of Even Number is %d \n ",iRet);

    getch();
    return 0;
}
