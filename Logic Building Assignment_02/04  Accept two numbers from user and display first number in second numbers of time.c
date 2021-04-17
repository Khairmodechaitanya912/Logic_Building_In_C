#include<stdio.h>
#include<conio.h>

void Display(int iNo,int iFrequency)
{
    int i=0;
    printf("\n Output is =");
    for(i=0;i<iFrequency;i++)
    {
        printf("  %d   ",iNo);
    }
    return ;
}
int main()
{
    int iValue=0;
    int iCount=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    printf("\n Enter Frequency = ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    getch();
    return 0;
}
