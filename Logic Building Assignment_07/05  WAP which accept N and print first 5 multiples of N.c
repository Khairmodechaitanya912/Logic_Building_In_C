#include<stdio.h>
#include<conio.h>


void Multiple_Display(int iNo)
{
    int i=0,Mult=0;

    for(i=1;i<=5;i++)
    {
        Mult=iNo*i;
        printf("\n %d",Mult);
    }

    printf("\n");

    return ;
}
int main()
{
    int iValue=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    Multiple_Display(iValue);

    getch();
    return 0;
}
