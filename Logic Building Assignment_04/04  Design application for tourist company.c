#include<stdio.h>
#include<conio.h>

int Tourist_Bill(int iKm)
{
    if(iKm<=100)
    {
        return (iKm*25);
    }
    else if(iKm>100)
    {
        return ((100*25)+(iKm-100)*15);
    }
}
int main()
{
   int Km=0,Kret=0;

   up:

   printf("\n Enter Your Total Kilometer = ");
   scanf("%d",&Km);

   if(Km==0)
   {
       printf("\n Plzz Enter Your Valid Total Kilometer...!! \n");
       goto up;
   }

   Kret=Tourist_Bill(Km);

   printf("\n Your Estimated Rent is %d \n ",Kret);

   getch();
   return 0;
}
