#include<stdio.h>
#include<conio.h>

void Display_Factor(int iNo)
{
    int i=0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }
    printf("\n Factor of %d is ",iNo);
    for(i=1;i<=iNo/2;i++)
    {
        if(iNo%i==0)
        {
            printf("\n %d ",i);
        }
    }
}
int main()
{
    int iValue=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    Display_Factor(iValue);

    getch();
    return 0;
}
