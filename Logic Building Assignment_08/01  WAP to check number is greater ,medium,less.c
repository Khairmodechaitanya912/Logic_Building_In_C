#include<stdio.h>
#include<conio.h>

void Number(int iNo)
{
    if(iNo<=50)
    {
        printf("\n Number is Small...!!\n");
    }
    else if(iNo>50&&iNo<100)
    {
        printf("\n Number is Medium...!!\n");
    }
    else
    {
        printf("\n Number is Large...!!\n");
    }

    return ;
}

int main()
{
    int iValue=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    Number(iValue);

    getch();
    return 0;
}
