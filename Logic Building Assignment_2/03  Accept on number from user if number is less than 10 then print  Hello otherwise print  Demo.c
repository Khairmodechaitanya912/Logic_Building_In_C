#include<stdio.h>
#include<conio.h>

int Display(iNo)
{
    if(iNo<10)
    {
        printf("\n Hello...!\n ");
    }
    else
    {
        printf("\n Demo...!\n ");
    }
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
