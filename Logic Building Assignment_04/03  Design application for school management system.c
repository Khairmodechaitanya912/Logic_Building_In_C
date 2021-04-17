#include<stdio.h>
#include<conio.h>

void School_Std(int iStd)
{
    if(iStd==1)
    {
        printf("\n Total Fee Of First Standard is :- 8900 \n");
    }
    else if(iStd==2)
    {
        printf("\n Total Fee Of Second Standard is :- 12790 \n");
    }
    else if(iStd==3)
    {
        printf("\n Total Fee Of Third Standard is :- 21000 \n");
    }
    else
    {
        printf("\n Total Fee Of Fourth Standard is :- 23450 \n");
    }

    return ;
}
int main()
{
    int std;

    up:

    printf("\n Enter School standard = ");
    scanf("%d",&std);

    if(std>4||std<1)
    {
        printf("\n Plzz Enter Valid Standard ...!!\n");
        goto up;
    }

    School_Std(std);

    getch();
    return 0;
}
