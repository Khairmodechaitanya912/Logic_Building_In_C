#include<stdio.h>
#include<conio.h>

void PrintEven(int iNo)
{
    int i=0;

    if(iNo<=0)
    {
        return ;
    }
    for(i=1;i<=iNo*2;i++)
    {
        if(i%2==0)
        {
            printf("\n %d",i);
        }
    }

    printf("\n");

    return ;
}
int main()
{
    int iValue=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    getch();
    return 0;
}
