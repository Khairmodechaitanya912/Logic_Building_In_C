#include<stdio.h>
#include<conio.h>

void Non_Fact(int iNo)
{
    int i=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    printf("\n Non Factor of %d is =  ",iNo);

    for(i=1;i<=iNo;i++)
    {
        if(iNo%i!=0)
        {
            printf("\n %d ",i);
        }
    }
    printf("\n ");

    return ;
}
int main()
{
    int iValue=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    Non_Fact(iValue);

    getch();
    return 0;
}
