#include<stdio.h>
#include<conio.h>

void Odd_Display(int iNo)
{
    int i=0,ONo=0;

    for(i=1;i<=iNo;i++)
    {
        if(i%2!=0)
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

    Odd_Display(iValue);

    getch();
    return 0;
}
