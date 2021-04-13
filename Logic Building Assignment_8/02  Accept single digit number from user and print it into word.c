#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
   switch(iNo)
   {
      case 0:
            printf("\n %d = Zero \n",iNo);
            break;
      case 1:
      case-1:
             printf("\n %d = One \n",iNo);
             break;
      case 2:
      case-2:
             printf("\n %d = Two \n",iNo);
             break;
      case 3:
      case-3:
             printf("\n %d = Three \n",iNo);
             break;
      case 4:
      case-4:
            printf("\n %d = Four \n",iNo);
            break;
      case 5:
      case-5:
            printf("\n %d = Five \n",iNo);
            break;
      case 6:
      case-6:
            printf("\n %d = Six \n",iNo);
            break;
      case 7:
      case-7:
            printf("\n %d = Seven \n",iNo);
            break;
      case 8:
      case-8:
            printf("\n %d = Eight \n",iNo);
            break;
      case 9:
      case-9:
            printf("\n %d = Nine \n",iNo);
            break;
      default:
        printf("\n Invalid Inputs...!!\n");
        break;

        return ;
   }
}
int main()
{
    int iValue=0;

    printf("\n Enter Single Digit Number = ");
    scanf("%d",&iValue);

    Display(iValue);

    getch();
    return 0;
}
