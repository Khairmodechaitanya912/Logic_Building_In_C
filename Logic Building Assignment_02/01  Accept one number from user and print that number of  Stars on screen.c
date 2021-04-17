#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
    int iCnt=0;
    while(iCnt<iNo)
    {
        printf("\n * ");
        iCnt++;
    }

    return ;
}

int main()
{
    int iValue=0;

    printf("Enter Number = ");
    scanf("%d",&iValue);

    Display(iValue);

    getch();
    return 0;
}

