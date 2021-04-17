#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
     if(iNo%2==0)
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
    BOOL bRet= FALSE;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    bRet=ChkEven(iValue);

    if(bRet==TRUE)
    {
        printf("\n Number is Even...!\n ");
    }
    else
    {
        printf("\n Number is Odd...!\n ");
    }

    getch();
    return 0;
}
