#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
    int i=0;

    for(i=-iNo;i<=iNo;i++)
    {
        printf(" %d",i);
    }

    printf("\n");

    return ;
}
int main()
{
    int iValue=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    printf("\n");

    Display(iValue);

    getch();
    return 0;
}
