#include<stdio.h>
#include<conio.h>

int Range_Sum(int iStart, int iEnd)
{
   int i=0,Add=0;

   for(i=iStart;i<=iEnd;i++)
   {
       Add=Add+i;
   }
   return Add;
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
        printf("\n Invalid Range...!!\n");
        goto up;
    }
    else if(iValue1<0||iValue2<0)
    {
        printf("\n Invalid Range...!!\nN");
        goto up;
    }

    iRet=Range_Sum(iValue1,iValue2);

    printf("\n Addition is %d \n ",iRet);

    getch();
    return 0;
}
