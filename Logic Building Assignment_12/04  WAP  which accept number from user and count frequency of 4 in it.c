#include<stdio.h>
#include<conio.h>

int count_Four(int iNo)
{
    int Rem=0,Cnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(;iNo>0;iNo=iNo/10)
    {
        Rem=iNo%10;

        if(Rem==4)
        {
            Cnt++;
        }
    }
    return Cnt;

}

int main()
{
    int iValue=0;
    int bRet=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    bRet=count_Four(iValue);

    printf("\n Count of 4 is = %d \n ",bRet);

    getch();
    return 0;

}
