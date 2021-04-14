#include<stdio.h>
#include<conio.h>

int Dollar_To_INR(int iNo)
{
   int Rs=0;

    Rs=iNo*70;

    return Rs;
}
int main()
{
    int iValue=0,iRet=0;

    printf("\n Enter Number of USD = ");
    scanf("%d",&iValue);

    iRet=Dollar_To_INR(iValue);

    printf("\n Value in INR is %d Rs.\n",iRet);

    getch();
    return 0;
}
