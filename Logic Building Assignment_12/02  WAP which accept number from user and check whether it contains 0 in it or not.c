#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Chk_Zero(int No)
{
    int j=0;

    if(No==0)
    {
        return TRUE;
    }

    while (No>0)
    {
        j=No%10;

        if(j==0)
        {
            return TRUE;
        }

        No=No/10;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet = FALSE ;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    bRet=Chk_Zero(iValue);

    if(bRet== TRUE)
    {
        printf("\n Its Contains Zero...!! \n ");
    }
    else
    {
        printf("\n There is No Zero...!! \n ");
    }

    getch();
    return 0;
}
