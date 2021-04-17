#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
    while(iNo>0)
    {
        printf("\n * ");
        iNo--;
    }
    return ;
}
int main()
{
    int iValue=0;

    printf("Enter a Number = ");
    scanf("%d",&iValue);

    Display(iValue);

    getch();
    return 0;
}
