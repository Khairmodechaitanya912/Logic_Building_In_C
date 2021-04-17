#include<stdio.h>
#include<conio.h>

void Range_Display_Rev(int iStart,int iEnd)
{
    for(;iEnd>=iStart;iEnd--)
    {
        printf("\n %d",iEnd);
    }

    printf("\n");

    return ;
}
int main()
{
    int iValue1=0,iValue2=0;

    up:

    printf("\n Enter Starting Point = ");
    scanf("%d",&iValue1);

    printf("\n Enter Ending Point = ");
    scanf("%d",&iValue2);

    if(iValue2<iValue1)
    {
        printf("\n Invalid Range...!!\n ");
        goto up;
    }

    printf("\n Given Range In Reverse = \n ");

    Range_Display_Rev(iValue1,iValue2);

    getch();
    return 0;
}
