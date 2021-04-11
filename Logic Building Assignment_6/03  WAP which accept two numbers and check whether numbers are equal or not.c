#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Chk_Equal(int BNo1,int BNo2)
{
    if(BNo1==BNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    BOOL bRet= FALSE;

    printf("\n Enter 1st Number = ");
    scanf("%d",&iValue1);

    printf("\n Enter 2nd Number = ");
    scanf("%d",&iValue2);

    bRet=Chk_Equal(iValue1,iValue2);

    if(bRet==TRUE)
    {
        printf("\n Given Two Numbers Are Equal...!!\n ");
    }
    else
    {
        printf("\n Given Two Numbers Are Not Equal...!!\n ");
    }

    getch();
    return 0;
}
