#include<stdio.h>
#include<conio.h>


void Display(int iNo)
{
    int i=0;

    for(i=1;i<=iNo;i++)
    {
        printf("\n %d",i);
    }

    printf("\n");

    return ;
}
int main()
{
    int iValue=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    Display(iValue);

    getch();
    return 0;
}
