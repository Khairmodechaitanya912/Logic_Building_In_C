#include<stdio.h>
#include<conio.h>

void Accept(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("\n * ");
    }
    return ;
}

int main()
{
    int iValue=0;

    printf("\n Enter number = ");
    scanf("%d",&iValue);

    Accept(iValue);

    getch();
    return 0;
}
