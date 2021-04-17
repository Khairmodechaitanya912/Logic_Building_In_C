#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
     if((iNo%5)==0)
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

    bRet=Check(iValue);

    if(bRet==TRUE)
     {
        printf("\n Divisible by 5");
     }
    else
    {
       printf("\n Not Divisible by 5");
    }

    getch();
    return 0;
}
