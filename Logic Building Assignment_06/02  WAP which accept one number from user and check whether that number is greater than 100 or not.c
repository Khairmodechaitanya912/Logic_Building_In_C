#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Chk_Greater(int bNo)
{
    if(bNo>100)
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
    int iValue=0;
    BOOL bRet=FALSE;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    bRet=Chk_Greater(iValue);

    if(bRet==TRUE)
    {
        printf("\n Number is Greater than 100...!!\n");
    }
    else
    {
        printf("\n Number is Smaller than 100...!!\n");
    }

    getch();
    return 0;
}

