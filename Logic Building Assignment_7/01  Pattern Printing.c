#include<stdio.h>
#include<conio.h>

int Pattern(int iNo)
{
    int i=1;

    for(i=1;i<=iNo;i++)
    {
        printf(" $ * ");
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

    Pattern(iValue);

    getch();
    return 0;
}
