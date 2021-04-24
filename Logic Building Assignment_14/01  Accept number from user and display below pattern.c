
/*
     Input : 5
     Output : A B C D E

*/


#include<stdio.h>
#include<conio.h>

int Pattern(iNo)
{
    int i=0;
    char Ch='\0';

    for(Ch='A';i<iNo;i++,Ch++)
    {
        printf("\n %c \n",Ch);
    }

    return ;
}
int main()
{
    int iValue=0;

    printf("\n Enter the Number of Elements = ");
    scanf("%d",&iValue);

    Pattern(iValue);

    getch();
    return 0;
}
