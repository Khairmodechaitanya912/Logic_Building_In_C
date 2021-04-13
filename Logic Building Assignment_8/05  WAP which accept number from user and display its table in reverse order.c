#include<stdio.h>
#include<conio.h>

void Table_Rev(int iNo)
{
    int i=10,Tbl=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(i=10;i>=1;i--)
    {
        Tbl=iNo*i;
        printf("\n %d",Tbl);
    }

    printf("\n");

    return ;
}
int main()
{
    int iValue=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    Table_Rev(iValue);

    getch();
    return 0;
}
