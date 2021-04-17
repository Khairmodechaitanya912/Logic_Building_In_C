#include<stdio.h>
#include<conio.h>

void Display()
{
    int i=5;

    while(i>=1)
    {
        printf(" %d \n",i);

        i--;
    }
    return ;
}

int main()
{
    Display();

    getch();

    return 0;
}
