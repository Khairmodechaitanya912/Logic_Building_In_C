#include<stdio.h>
#include<conio.h>

int Fact_Rev(int iNo)
{
    int i=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    printf("\n %d Number of Factor are Decreasing in order : ",iNo);

    for(i=iNo/2;i>=1;i--)
    {
        if(iNo%i==0)
        {
           printf("\n\n %d",i);
        }
    }

    return ;
}
int main()
{
    int iValue=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    Fact_Rev(iValue);

    getch();
    return 0;
}
